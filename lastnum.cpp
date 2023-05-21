#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, num; int ans=1;
        cin >> n;
        while(n--){
            cin >> num;
            num %= 10;
            ans *= num;
            ans %= 10;
        }
        cout << ans << endl;
    }
    return 0;
}