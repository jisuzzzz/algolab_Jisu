#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T-->0) {
        int n, grade;
        int cntA = 0, cntB = 0, cntC = 0, cntD = 0, cntF = 0;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> grade;
            
            if (grade >= 90) cntA++;
            else if (grade >= 80) cntB++;
            else if (grade >= 70) cntC++;
            else if (grade >= 60) cntD++;
            else cntF++;
        }
        
        cout << cntA << " " << cntB << " " << cntC << " " << cntD << " " << cntF << "\n";
    }
    
    return 0;
}