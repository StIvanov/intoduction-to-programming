#include<iostream>

using namespace std;

int main(){
    int n, m;
    int arr1[100], arr2[100];
    int margeArr[200];

    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr1[i];

    cin>>m;
    for(int i=0;i<m;i++)
        cin>>arr2[i];

    int margeIdx = 0;
    int idx=0;
    while(idx < n)
        margeArr[margeIdx++] = arr1[idx++];

    idx=0;
    while(idx < m)
        margeArr[margeIdx++] = arr2[idx++];

    for(int i=0; i< margeIdx; i++)
        cout<<margeArr[i]<<" ";

    cout<<endl;
}
