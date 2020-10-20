#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double a, b, c;

    cin>> a>> b>> c;

    double perimeter = a + b + c;
    double halfPerimeter = perimeter/2.0;

    //heron`s formula
    double area = sqrt(halfPerimeter * (halfPerimeter - a) * (halfPerimeter - b) * (halfPerimeter - c));

    cout<< area<< endl;
}
