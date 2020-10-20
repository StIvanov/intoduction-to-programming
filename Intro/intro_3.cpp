#include<iostream>
using namespace std;

int main(){
    int h1, h2, h3;
    int m1, m2, m3;

    cin>> h1>> m1;
    cin>> h2>> m2;
    cin>> h3>> m3;

    int allInMinutes = (h1 + h2 + h3)*60 + m1 + m2 + m3;

    int allHours = allInMinutes / 60;
    int allMinutes = allInMinutes % 60;

    cout<< allHours<< allMinutes<< endl;
}
