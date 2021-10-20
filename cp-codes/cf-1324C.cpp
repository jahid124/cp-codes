#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define fi freopen("0input.txt","r",stdin)
#define fflush cin.ignore()

int main()
{
    int t=1,T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        int n=0,tem=0;
        for(int i=0; i<s.size(); i++)
        {
            //cout<<s[i];
            if(s[i]=='L')
                tem++;
            if(tem>n)
                n=tem;
        }
        cout<<n+1<<"\n";

    }
}
