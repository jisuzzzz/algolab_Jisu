#include <iostream>
using namespace std;

const int Size = 8;
const int dx[8] = {-1,-1,-1,0,0,1,1,1};
const int dy[8] = {-1,0,1,-1,1,-1,0,1};
const char Empty = '+'; 
const char black = 'X';
const char white = 'O';

char **makeboard(){
    char **board = new char *[Size];
    for(int i=0; i<Size; i++){
        board[i]=new char[Size];
        for(int j=0; j<Size; j++){
            board[i][j]=Empty;
        }
    }
    board[3][3]=white;
    board[4][4]=white; 
    board[3][4]=black;
    board[4][3]=black;

    return board; 리턴
}
void game_start(char **board, int s,int t,char BorW);

int main(){
    int t; 
    cin >> t;
    while(t--){
        char **board = makeboard();
        int n; int b_cnt=0; int w_cnt=0;
        cin >> n;
        char BorW = black; 
        for(int i=0; i<n; i++){
            int s,t;
            cin >> s >> t;
            s--; 
            t--;
            board[s][t]=BorW;  
            game_start(board,s,t,BorW); 
            BorW = (BorW==black) ? white : black;
        }
        for(int i=0; i<Size; i++){
            for(int j=0; j<Size; j++){
                if(board[i][j]==black) b_cnt++; 
                else if(board[i][j]==white) w_cnt++;
            }
        }
        cout << b_cnt << " " << w_cnt << endl;
        for(int i=0; i<Size; i++){
            for(int j=0; j<Size; j++){
                cout << board[i][j];
            }
            cout << endl;
        }
        
        for(int i=0; i<Size; i++){
            delete[] board[i];
        }
        delete[] board;
        
    }
    return 0;
}
void game_start(char **board, int s, int t, char BorW){
    for(int i=0; i<8; i++){ 
        int nx = s+dx[i];  
        int ny = t+dy[i];
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
            nx = s+dx[i]; 
            ny = t+dy[i];
            while(board[nx][ny]!=BorW){ 
                board[nx][ny]=BorW; 
                nx+=dx[i];
                ny+=dy[i];
            }
        }
    }
} 