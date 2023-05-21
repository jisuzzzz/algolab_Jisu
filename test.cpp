#include <iostream>
using namespace std;
int main(){
    int arr1[3][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int arr2[5][2]={{1,2},{3,4},{5,1},{2,3},{4,5}};
    int arr[2][5]={0};

    for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            arr[i][j]=arr2[j][i];
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    int arr3[3][2]={0};
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            arr3[i][j]=arr1[i][j]*arr2[i][j];
        }
    }
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<2; j++){
    //         cout << arr3[i][j] << ' ';
    //     }
    //     cout << endl;
    // }



    return 0;
}

    
