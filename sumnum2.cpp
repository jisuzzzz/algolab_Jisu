#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, num; int sumnum=0;
        cin >> n;
        
        for(int i=0; i<n; i++){
            cin >> num;
            sumnum += num;
        }
        cout << sumnum <<endl;
    }
    return 0;
}