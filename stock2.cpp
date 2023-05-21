#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n,a1,a2,a3,temp;
        int cnt = 0;
        cin >> n >> a1 >> a2 >> a3;

        if(a1 < a2 && a2 > a3) cnt++;
        for(int i=3; i<n; i++){
            cin >> temp;
            if(a3 == temp)continue;
            else{
                a1=a2;
                a2=a3;
                a3=temp;
            }
            if(a1 < a2 && a2 > a3) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}