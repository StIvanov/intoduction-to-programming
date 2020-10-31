#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num1;
    int num2;
    char operand;

    cin>>num1>>operand>>num2;

    switch(operand){
        case '+': {
            cout<<num1 + num2<<endl;
        }break;
        case '-': {
            cout<<num1 - num2<<endl;
        }break;
        case '*': {
            cout<<num1 * num2<<endl;
        }break;
        case '/': {
            cout<<num1/(double)num2<<endl;
        }break;
        default: {
            cout<<"Unknown operand\n";
        }
    }
}
