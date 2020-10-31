#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    int currentNumber;
    int sum = 0;
    int sumMulti = 1;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>currentNumber;

        sum += currentNumber;
        sumMulti *= currentNumber;
    }

    cout<<sum<<" "<<sum/(double)n<<" "<<sumMulti<<endl;
}
