#include<iostream>

using namespace std;

int main()
{
    int charsCountByCode[257];
    for(int i=1; i<257; i++)
        charsCountByCode[i] = 0;

    char charArr[1000];
    int n;

    cin>>n;
    for(int i=0; i<n; i++) cin>>charArr[i];

    for(int i=0; i<n; i++)
    {
        charsCountByCode[charArr[i]]++;
    }

    for(int i=1; i<257; i++)
    {
        while(charsCountByCode[i]>0)
        {
            cout<<(char)i;

            charsCountByCode[i]--;
        }
    }
    cout<<endl;
}
