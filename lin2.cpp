#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int k;
        cin >> k;
        for(int i=0; i<k; i++){
            for(int j=0; j<k; j++){
                if(i==(k/2) && j==(k/2)){
                    cout << "O";
                }
                else if(i==k/2){ 
                    cout << "+";
                }
                else if(j==k/2){
                    cout << "I"; 
                }
                else if(i+j==k-1){ 
                    cout << "*";
                }
                else{
                    cout << ".";
                }
                
            }
            cout << endl;

        }
        
    }
    return 0;
}