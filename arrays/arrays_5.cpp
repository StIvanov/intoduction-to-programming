#include<iostream>

using namespace std;

int main(){
    int n, maxLen = 1;
    int arr[100];

    cin>>n;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int curLen = 1;
    for(int i=1;i<n;i++){
        if(arr[i-1] < arr[i]){
            curLen++;
        }else {
            if(maxLen < curLen)
                maxLen = curLen;

            curLen = 1;
        }
    }

    cout<<maxLen<<endl;
}
