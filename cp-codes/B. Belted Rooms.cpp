#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define flw freopen ("0output.txt","w",stdout)
#define flr freopen ("0input.txt","r",stdin)
#define no1s(x) __builtin_popcount(x)
#define parity(x) __builtin_parity(x)
#define leadingZeros(x) __builtin_clz(x)
#define trailingZeros(x) __builtin_ctz(x)
#define mx 100005
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n,eq=0,cw=0,aw=0,ans=0,f=0;
        string s;
        cin>>n>>s;
        map<int,int>mp;

        for(int i=0; i<n; i++)
        {
            if(i==n-1)
            {
                if(s[i]=='-')
                {
                    mp[i]=1;
                    mp[0]=1;
                }
            }
            else
            {
                if(s[i]=='-')
                {
                    mp[i]=1;
                    mp[i+1]=1;
                }

            }
        }

        for(int i=0; i<n; i++)
            if(mp[i]==1) ans++;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='>')
            {
                cw=1;
            }

            else if(s[i]=='<')
            {
                aw=1;
            }
            else eq++;
        }

        if(eq==n || ans==n || aw==0 || cw==0) cout<<n<<"\n";
        else cout<<ans<<"\n";
    }
    return 0;
}
