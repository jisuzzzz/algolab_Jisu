#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T-->0) {
        int k;
        cin >> k;
        if(k<10) {
        cout << k << endl;
        continue;
        }
        else{
            int len = 2; int start = 10; int end = 99; int cnt = 9;
            while(k > len*(end-start+1)+cnt){
                cnt += (end-start+1)*len;
                len++;
                start *= 10;
                end = end*10+9;
            }
            int dk = k - cnt;
            int num = start + ((dk-1) / len);
            int digit = ((dk-1) % len);

            cout << to_string(num)[digit] << endl;
        }
    }
    return 0;
}
