#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define flw freopen ("0output.txt","w",stdout)
#define flr freopen ("0input.txt","r",stdin)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// MUST ADD

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            mp[a]++;
        }
        int ans=0;
        for(int i=0; i<=n; i++)
        {
            if(mp[i]<2)
            {
                ans=i;
                break;
            }
        }
        for(int i=ans; i<=n; i++)
        {
            if(mp[i]<1)
            {
                //cout<<"In";
                ans+=i;
                break;
            }
        }
        cout<<ans<<"\n";

    }
}
