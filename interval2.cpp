#include <iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    int a,b,c,d;
    while(T--){
        cin >> a >> b >> c >> d;
        int X1,X2;

        X1 = min(b,d)-max(a,c);
        if(X1<0) {
            X1=0;
            X2 = b-a+d-c;
        }
        else X2 = max(b,d)-min(a,c);

        cout << X1 << " " << X2 << endl;
    }
    return 0;
}