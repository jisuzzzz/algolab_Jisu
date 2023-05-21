#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

const int Size = 8;
const char Empty = '+';
const char Black = 'X';
const char White = 'O';
const int dx[8] = {-1,-1,-1,0,0,1,1,1};
const int dy[8] = {-1,0,1,-1,1,-1,0,1};

vector<vector<char> > make_Board(){
    vector<vector<char> > board(Size, vector<char>(Size,Empty));
    board[3][3] = White;
    board[4][4] = White;
    board[3][4] = Black;
    board[4][3] = Black;
    return board;
}
void game_start(vector<vector<char> >& board, int x, int y, char BorW);
void print_borad(vector<vector<char> >& board);

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<vector<char> > board = make_Board();
        int n; char BorW = Black;
        cin >> n;
        int b_cnt=0; int w_cnt=0;
        for(int i=0; i<n; i++){
            int x,y;
            cin >> x >> y;
            x--; y--;
            board[x][y] = BorW;
            game_start(board,x,y,BorW);
            BorW = (BorW==Black) ? White : Black;
        }
        for(int i=0; i<Size; i++){
            for(int j=0; j<Size; j++){
                if(board[i][j]==Black) b_cnt++;
                else if(board[i][j]==White) w_cnt++;
            }
        }
        cout << b_cnt << " " << w_cnt << endl;
        print_borad(board);
    }
}
void game_start(vector<vector<char> >& board, int x, int y, char BorW){
    for(int i=0; i<8; i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        bool isok = false;
        while(nx>=0 && ny>=0 && nx<Size && ny<Size){
            if(board[nx][ny]==Empty)break;
            else if(board[nx][ny]==BorW){
                isok=true;
                break;
            }
            nx += dx[i];
            ny += dy[i];
        }
        if(isok){
            nx = x+dx[i];
            ny = y+dy[i];
            while(board[nx][ny]!=BorW){
                board[nx][ny]=BorW;
                nx+=dx[i];
                ny+=dy[i];
            }
        }
    }
}
void print_borad(vector<vector<char> >& board){
    for(int i=0; i<Size; i++){
        for(int j=0; j<Size; j++){
            cout << board[i][j];
        }
        cout << endl;
    }
}
