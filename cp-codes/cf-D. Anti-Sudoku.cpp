#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s[9];
        for(int j=0; j<9; j++)
        {
            cin.ignore();
            cin>>s[j];
        }
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(s[i][j]=='1')
                    s[i][j]='2';
            }
        }
        for(int j=0; j<9; j++)
        {
            cout<<s[j]<<"\n";
        }
    }
}
