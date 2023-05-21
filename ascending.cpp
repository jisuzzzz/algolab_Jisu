#include <iostream>
using namespace std;

const int MAX_SIZE=100;
int cnt;
int sum;

void solve(int data[], int n){
    int cnt=0; int sum=0; int a=0; int b=0; int tmp=0;
    for(int i=1; i<n; i++){
        if(data[i]>=data[i-1]){
            b = i;
        }
        else{
            if(b-a>0){
                cnt++;
                for(int j=a; j<=b; j++){
                    sum+=data[j];
                }
            }
            a=i;
            b=i;
        }
    }
    if(b-a>0){
        cnt++;
        for(int j=a; j<=b; j++){
            sum+=data[j];
        }
    }
    cout << cnt << " " << sum << endl;
}

int main(){
    int t;
    int data[MAX_SIZE],size;

    cin >> t;
    while(t--){
        cin >> size;
        for(int i=0; i<size; i++){
            cin >> data[i];
        }
        solve(data,size);
    }
    return 0;
}