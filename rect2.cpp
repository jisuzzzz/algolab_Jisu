#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    int px,py,qx,qy,px2,py2,qx2,qy2;
    int w,h,area,round,w2,h2,area2,round2;
    int over_w,over_h,over_area,over_round;
    int ans_area,ans_round;
    while(T--){
        cin >> px >> py >> qx >> qy;
        cin >> px2 >> py2 >> qx2 >> qy2;

        w = qx-px; h = qy-py; w2 = qx2-px2; h2 = qy2-qx2;
        area = w*h; area2 = w2*h2; round = (w+h)*2; round2 = (w2+h2)*2;

        if((px2<qx && px<qx2) && (py2<qy && py<qy2)){
            over_w = min(qx,qx2)-max(px,px2);
            over_h = min(qy,qy2)-max(py,py2);
            over_area = over_w*over_h;
            over_round= (over_w+over_h)*2;

            ans_area = area+area2-over_area;
            ans_round = round+round2-over_round;
        }
        else{
            ans_area = area+area2;
            ans_round = round+round2;
        }
        cout << ans_area << " " << ans_round << endl;
    }
    return 0;
}