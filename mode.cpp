#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int num; int temp[101]={0}; int arr_idx[101]={0};
        while(true){
            cin >> num;
            if(num==0) break;
            if(num>0 && num<101) temp[num]++;
        }
        int cnt=1; int max_idx=0; int max_val=0;
        for(int i=1; i<101; i++){
            if(temp[i]>=1){
                arr_idx[temp[i]]++;
            }
        }
        for(int i=1; i<101; i++){
            if(arr_idx[i]>0)cnt++;
        }
        for(int i=1; i<101; i++){
            if(cnt>1){
                if(temp[i]>=2){
                    max_idx=i;
                    if(max_idx<i){
                        max_idx=i;
                    }
                }
            }
            else{
                if(max_val<temp[i]){
                    max_val=temp[i];
                    max_idx=i;
                }
            }
        }
        cout << max_idx << endl;
    }
    return 0;
}