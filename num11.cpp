#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
    string num;
    cin >> num;
    int n = num.length();
    int digits[n];
    string ans="";
    string reverse_ans="";
    int idx;

    for (int i = n - 1; i >= 0; i--) {
        digits[i] = num[i] - '0';
    }
    reverse_ans += to_string(digits[n-1]);
    for(int i=n-1; i>-1; i--){
        if(digits[i]>digits[i-1]){
            if(i-1<0)break;
            digits[i-1]=(digits[i-1]+10)-digits[i];
            reverse_ans += to_string(digits[i-1]);
            digits[i-2]-=1;
        }else{
            if(i-1<0)break;
            digits[i-1]=digits[i-1]-digits[i];
            reverse_ans += to_string(digits[i-1]);
        }
    }
    if(reverse_ans[reverse_ans.size()-1]=='0'){
        for(int i=reverse_ans.size()-2; i>-1; i--){
        ans += reverse_ans[i];
        }
        for(int i=0; i<ans.size(); i++){
            if(ans[i]!='0'){
                idx =i;
                break;
            }
        }
        ans=ans.substr(idx,ans.size());
    }else{
        ans = "0";
    }
    cout << ans << endl;
    
    }
    return 0;
}