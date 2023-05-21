#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        bool flag = true;
        cin >> str;
        if((isalpha(str[0])==0) && (str[0]!='_')){
            flag=false;
        }
        else{
            for(int i=1; i<str.size(); i++){
                if(isalpha(str[i])==0 && isdigit(str[i])==0 &&(str[i] != '_')){
                    flag=false;
                    break;
                }
            }
        }
        cout << flag << endl;

    }
    return 0;
}