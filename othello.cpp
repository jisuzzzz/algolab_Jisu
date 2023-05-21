#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

const int SIZE = 8;
const char EMPTY = '+';
const char BLACK = 'X';
const char WHITE = 'O';
const vector<int> dx = { -1, -1, -1, 0, 0, 1, 1, 1 };
const vector<int> dy = { -1, 0, 1, -1, 1, -1, 0, 1 };

vector<vector<char>> makeboard() {
   vector<vector<char>> board(SIZE, vector<char>(SIZE, EMPTY));
   board[3][3] = WHITE;
   board[4][4] = WHITE;
   board[3][4] = BLACK;
   board[4][3] = BLACK;
        
   return board;
}


void game_start(vector<vector<char>>& board, int x, int y, char BorW) {
   for (int i= 0; i<8; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      bool isok = false;
      while (nx >= 0 && nx < SIZE && ny >= 0 && ny < SIZE) {
         if (board[nx][ny] == EMPTY) break;
         else if (board[nx][ny] == BorW) {
            isok = true;
            break;
         }
         nx += dx[i];
         ny += dy[i];
      }
      if (isok) {
         nx = x + dx[i];
         ny = y + dy[i];
         while (board[nx][ny] != BorW) {
               board[nx][ny] = BorW;
               nx += dx[i];
               ny += dy[i];
            }
         }
      }
   }

int main() {
   int t;
   cin >> t;

   while (t--) {
      vector<vector<char>> board = makeboard();

      int n;
      cin >> n;
      char BorW = BLACK;

      for (int i = 0; i < n; i++) {
         int x, y; int B_cnt = 0; int W_cnt = 0;
         cin >> x >> y;
         x--; y--;
         board[x][y] = BorW;
         game_start(board, x, y, BorW);
         BorW = (BorW == BLACK) ? WHITE : BLACK;
      }
      for (int i = 0; i < SIZE; i++) {
         for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == BLACK) B_cnt++;
            else if (board[i][j] == WHITE) W_cnt++;
         }
      }
      cout << B_cnt << " " << W_cnt << endl;
      for (int i = 0; i < SIZE; i++) {
         for (int j = 0; j < SIZE; j++) {
            cout << board[i][j];
         }
         cout << endl;
      }
   }
}