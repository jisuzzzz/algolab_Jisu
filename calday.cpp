#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int y=0, m=0, d=0;
        cin >> y >> m >> d;
        for(int i = 1; i < y; i++){

            if((i%400 == 0) || ( i%100 != 0 && i%4 == 0)){
                d += 366;
            }else{
                d += 365;
            }
        }
        for(int i = 1; i < m; i++){
            if(i==1||i==3||i==5||i==7||i==8||i==10){
                d += 31;
            }else if(i != 2){
                d += 30;
            }else{
                if((y%400 == 0) || (y%100 != 0 && y%4 == 0)){
                    d += 29;
                }else{
                    d += 28;
                }
            }
        }
        cout << d%7 << endl;
    }
}