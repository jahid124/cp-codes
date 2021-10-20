#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC

int main()
{
    int t=1,T;
    cin>>T;
    while(T--)
    {
        string s;
        int ans=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            ans=ans ^ s[i];
        }

        map<int,int>m;
        for(int i=0;i<26;i++)
        {
            m[(int)'a'+i]=0;
        }
        for(int i=0;i<s.size();i++)
        {
            m[(int)s[i]]++;
        }
        cout<<"Case "<<t<<": "<<(char) ans<<"\n";
        for(int i=0;i<26;i++)
        {
            cout<<(char)((int) 'a'+i)<<" = "<<m[97+i]<<"\n";
        }
        t++;
    }
}

