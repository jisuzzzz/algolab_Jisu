#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int  n;
        cin >> n;
        int cnt = n*n-1;
        int **m_square = new int*[n];
        for(int i=0; i<n; i++){
            m_square[i] = new int[n];
            for(int j=0; j<n; j++){
                m_square[i][j]=0;
            }
        }
        int x=0; int y=n/2;
        int s=1;
        m_square[x][y]=s++;
        while(cnt--){
            x=x-1<0 ? n-1 : x-1;
            y = (y+1)%n;
            if(m_square[x][y]!=0){
                x=(x+1)%n;
                y=y-1<0 ? n-1 : y-1;
                x++;
                m_square[x][y] = s++;
            }
            else m_square[x][y]= s++;
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
            cout << m_square[i][j] << ' ';
            }
        cout << endl;
        }
        for (int i = 0; i < n; i++) {
            delete[] m_square[i];
        }
        delete[] m_square;
        
    }
    return 0;
}