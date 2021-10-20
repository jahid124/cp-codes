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
        int x,n=s.size();
        cin>>x;
        map<int,int>mp;
        bool f=0;
        for(int i=0; i<n;i++)
        {
            mp[i]=-1;
        }

        for(int i=x;i<n;i++)
        {
            if(s[i-x]=='1')
            {
                if(mp[i]==0)
                {
                    f=1;
                    break;
                }
                else mp[i]=1;
            }
        }
    }
}
