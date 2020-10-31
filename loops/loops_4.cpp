#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int number;
    int dividersCount = 0;

    cin>> number;

    for(int i=2;i<=sqrt(number);i++){
        if(number % i != 0) continue;
        dividersCount++;
    }

    if(dividersCount == 0){
        cout<<"the number is prime\n";
    }else {
        cout<<"the number is not prime\n";
    }
}
