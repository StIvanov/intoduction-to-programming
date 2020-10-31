#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int year;

    cin>> year;

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                cout<<"is leap\n";
            }else{
                cout<< "not leap\n";
            }
        }else{
            cout<<"is leap\n";
        }
    }else{
        cout<< "not leap\n";
    }
}
