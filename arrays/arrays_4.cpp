#include<iostream>

using namespace std;

int main(){
    int n;
    int arr[100];

    cin>>n;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    bool inDescending = true;
    for(int i=0;i < n - 1 && inDescending; i++){
        inDescending = arr[i] > arr[i+1];
    }

    if(inDescending){
        cout<<"descending order\n";
    }else{
        bool inAscending = true;
        for(int i=0;i<n - 1 && inAscending; i++){
            inAscending = arr[i] < arr[i+1];
        }

        if(inAscending){
            cout<<"ascending order\n";
        }
    }
}
