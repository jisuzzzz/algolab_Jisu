#include <iostream>
using namespace std;

int main(){
    int const Max = 1001;
    int T;
    int arr[Max][Max];
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    cin >> T;
    while(T-->0){
        int n; int a; int b; int cnt=0;
        cin >> n >> a >> b;
        if(n==1){
            cout << 1;
        }
        int temp=0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = ++temp;
            }
        }
        for(int i=0; i<n/2; i++){
            int x = i, y = i;
            for(int j=0; j<4; j++){
                int nx = x + dx[j], ny = y + dy[j];
                while(nx >= i && ny >= i && nx < n - i && ny < n - i){
                    cnt ++;
                    if (cnt >= a && cnt <= b){
                        cout << arr[x][y] << " ";
                    }
                    
                    x = nx, y = ny;
                    if(cnt >= b)break;
                    nx += dx[j], ny += dy[j];
                }
            }
        }
        if (cnt >= a && cnt <= b) cout << arr[n/2][n/2] << " ";
        cout << endl;
    }
    return 0;
}