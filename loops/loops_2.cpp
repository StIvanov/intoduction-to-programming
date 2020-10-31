#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    int maxNumber;
    int minNumber;
    int currentNumber;

    cin>> n;

    for(int i= 0; i<n; i++){
        cin>>currentNumber;

        if(!maxNumber) {// when maxNumber is not set
            maxNumber = currentNumber;
        }else if(maxNumber < currentNumber){
            maxNumber = currentNumber;
        }
        if(!minNumber) {// when minNumber is not set
            minNumber = currentNumber;
        }else if(minNumber > currentNumber){
            minNumber = currentNumber;
        }
    }

    cout<<minNumber<<" "<<maxNumber<<endl;
}
