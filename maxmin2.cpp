#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, num, minnum, maxnum;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> num;
            arr[i] = num;
        }
        minnum = maxnum = arr[0];
        for(int i=1; i<n; i++){
            minnum = min(minnum, arr[i]);
            maxnum = max(maxnum, arr[i]);
        }

        
        cout << minnum << " " << maxnum << endl;
    }
    return 0;
}