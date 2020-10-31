#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int number;
    int degree;
    int newNum = 1;

    cin>> number>> degree;

    while(degree > 0){
        newNum = newNum * number;

        degree--;
    }

    cout<<newNum<<endl;
}
