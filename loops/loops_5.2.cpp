#include<iostream>
using namespace std;

int main(){
    int n;

    cin>> n;

    for(int i=1;i<=n;i++){// we will print n lines
        for(int j=1; j<= n-i; j++){// on every row we have n - i spaces before pasting the numbers
            cout<<' ';
        }
        for(int j=1; j<= i; j++){// every row will contain numbers from 1 to i (current row number)
            cout<<j;
        }
        cout<<endl;
    }
}
