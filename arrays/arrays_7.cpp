#include<iostream>

using namespace std;

int main(){
    int n;
    int arr[100];
    bool withUniqueEls = true;

    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n && withUniqueEls;i++){
        for(int j = i+1;j<n && withUniqueEls;j++){
            withUniqueEls = arr[i] != arr[j];
        }
    }

    if(withUniqueEls)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
