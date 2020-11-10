#include<iostream>

using namespace std;

int main(){
    int n, m, br= 0;
    int arr[100];

    cin>>n>> m;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++){
        if(arr[i] != m)continue;
        br++;
    }

    cout<<br<<endl;
}
