#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int num;
        int temp[101]={0};
        int arr_idx[101] = {0};
        while(true){
            cin >> num;
            if(num==0) break;
            if(num>0 && num<101) temp[num]++;
        }
        int idx=0; int max_val=0;
        for(int i=1; i<101; i++) {
            if(max_val <= temp[i]) {
                max_val = temp[i];
                arr_idx[idx] = i;
                idx++;
            }
        }

        int max_idx = 0;
        for(int i=0; i<101; i++) {
            if(max_idx < arr_idx[i]) max_idx = arr_idx[i];
        }
        if(max_val == 0) cout << 0 << "\n";
        else cout << max_idx << "\n";
    }
}