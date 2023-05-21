#include <iostream>
#include <string>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        string num;
        cin >> num;
        int ans =1;
        while(num.size()>1){
            ans = 1;
            for(int i=0; i<num.length(); i++){
                if(num[i]!='0') ans *= (num[i]-'0');
            }
            num = to_string(ans);
        }
        
        cout << num << endl;
    }
    return 0;
}