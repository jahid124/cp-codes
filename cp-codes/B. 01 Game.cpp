#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int sz=s.size(),z=0,o=0;
        for(int i=0;i<sz;i++)
        {
            if(s[i]=='0')
                z++;
            else o++;
        }
        if(min(z,o)%2==0)
            cout<<"NET\n";
        else cout<<"DA\n";
    }
}
