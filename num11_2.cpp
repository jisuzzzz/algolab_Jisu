#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    std::cin >> t;
    while(t--){
    string num;
    cin >> num;
    int n = num.length();
    string ans="";
    string reverse_ans="";
    int idx;

    reverse_ans += num[n-1];
    for(int i=n-1; i>-1; i--){
        if((num[i]-'0')>(num[i-1]-'0')){
            if(i-1<0)break;
            num[i-1]=(((num[i-1]-'0')+10)-(num[i]-'0'))+'0';
            reverse_ans += num[i-1];
            num[i-2] = ((num[i-2]-'0')-1)+'0';
        }else{
            if(i-1<0)break;
            num[i-1]=((num[i-1]-'0')-(num[i]-'0'))+'0';
            reverse_ans += num[i-1];
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
    cout << ans << '\n';
    }
    return 0;
}
