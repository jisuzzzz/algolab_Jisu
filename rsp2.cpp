#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, num;
        int r = 0; int s = 0; int p = 0;
        cin >> n;
        int k=n;
        while(n--){
            cin >> num;
            if(num==1) s++;
            else if(num==2) r++;
            else p++;
        }
        if(s==0 || r==0 || p==0){
            if(s==k || r==k || p==k) cout << 0 << endl;
            else if(s==0) cout << p << endl;
            else if(r==0) cout << s << endl;
            else cout << r << endl;
        }
        else cout << 0 << endl;
    }
    return 0;
}