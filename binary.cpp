#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int num, cnt0=0, cnt1=0;
        cin >> num;
        while(num!=0){
            if(num%2==0)cnt0++;
            else cnt1++;
            num/=2;
        }
        cout << cnt0 << " " << cnt1 << endl;
    }


    return 0;
}