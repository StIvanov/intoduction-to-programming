#include<iostream>
using namespace std;

int main(){
    int n;

    cin>> n;

    for(int i=1;i<=n;i++){// we will print n lines
        for(int j=1; j<= n-i; j++){// we have n - i spaces on every row before pasting the numbers
            cout<<' ';
        }
        for(int j=1; j<= i; j++){// every row will contain numbers from 1 to i (current row number)
            cout<<j;
        }
        for(int j = i - 1; j> 0; j--){// after that we need to print numbers from i-1 to 1
            cout<<j;
        }
        cout<<endl;
    }
}
