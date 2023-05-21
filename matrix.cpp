#include <iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int r,s,t;
        cin >> r >> s >> t;

        int m_1[r][s];
        int m_2[s][t];
        int ans[r][t]={};

        for(int i=0; i<r; i++){
            for(int j=0; j<s; j++){
                cin >> m_1[i][j];
            }
        }
        for(int i=0; i<s; i++){
            for(int j=0; j<t; j++){
                cin >> m_2[i][j];
            }
        }
        for(int i=0; i<r; i++){
            for(int j=0; j<t; j++){
                int sum=0;
                for(int k=0; k<s; k++){
                    sum += m_1[i][k]*m_2[k][j];
                }
                ans[i][j]=sum;
            }
        }
        for(int i=0; i<r; i++){
            for(int j=0; j<t; j++){
                cout << ans[i][j] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}