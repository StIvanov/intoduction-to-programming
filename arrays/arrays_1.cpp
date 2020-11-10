#include<iostream>

using namespace std;

int main(){
    int maxNumber, minNumber;
    int sum = 0, multiplication = 1;

    int n;
    int arr[100];

    cin>> n;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    maxNumber = arr[0];
    minNumber = arr[0];
    for(int i=0;i<n;i++){
        if(maxNumber < arr[i])
            maxNumber = arr[i];

        if(minNumber > arr[i])
            minNumber = arr[i];

        sum += arr[i];
        multiplication *= arr[i];
    }

    double median = 0;
    if(n%2 == 0)
        median = (arr[n/2] + arr[n/2 - 1])/2.0;
    else
        median = arr[n/2];

    cout<<maxNumber<<" "<<minNumber<<" "<<sum<<" "<<multiplication<<" "<<(double)sum/n<<" "<<median<<endl;
}
