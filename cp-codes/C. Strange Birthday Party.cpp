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
///mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        ll n,m,x;
        ll ans=0;
        cin>>n>>m;
        vector<int>f(n),c(m);
        map<int,bool>mp;

        for(int i=0; i<n; i++) cin>>f[i];
        for(int i=0; i<m; i++) cin>>c[i];

        sort(f.begin(),f.end(),greater<int>());

        x=0;
        for(int i=0; i<n; i++)
        {
            if(x<m and c[f[i]-1]>=c[x]) ans+=c[x],x++;
            else ans+=c[f[i]-1];
            //cout<<ans<<endl;
        }

        cout<<ans<<endl;
    }
    return 0;
}
