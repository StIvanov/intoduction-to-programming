#include<iostream>

using namespace std;

int main(){
    char arr[100];
    int sum = 0, n;

    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++)
        sum+=arr[i];

    cout<<sum<<endl;
}
