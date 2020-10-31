#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x1, x2, x3, x4;
    int y1, y2, y3, y4;
    int sumArea = 0;

    cin>> x1>> y1;//top left sqr1
    cin>> x2>> y2;//bottom right sqr1
    cin>> x3>> y3;//top left sqr2
    cin>> x4>> y4;//bottom right sqr2

    if(x1 <= x3 && x2 >= x3 && y1 >= y3 && y2 <= y3){//sqr2 top left is inside the sqr1
        if(x2 <= x4 && y2 >= y4){//sqr2 bottom left is outside the sqr1
            sumArea = (x2 - x3) * (y3 - y2);
        }
    }else if(x3 <= x1 && x4 >= x2 && y3 >= y1 && y4 <= y2){
        if(x4 <= x2 && y4 >= y2){
            sumArea = (x4 - x1) * (y1 - y4);
        }
    }

    cout<<sumArea<<endl;
}
