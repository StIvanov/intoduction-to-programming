#include<iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;

    cin>> n;

    // sum = n % 10 + n % 100 / 10 + n % 1000 / 100 + n % 10000 / 1000 + n / 10000

    sum = sum + n%10;
    n = n / 10;

    sum = sum + n%10;
    n = n / 10;

    sum = sum + n%10;
    n = n / 10;

    sum = sum + n%10;
    n = n / 10;

    sum = sum + n%10;
    n = n / 10;

    cout<< sum << endl;
}
