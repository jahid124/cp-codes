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
    int n,m,a,f=0,sm=2000000000,ans=0,j=0;
    cin>>n>>m;
    if(!m){
        cout<<"1\n";
        return 0;
    }
    vector<int>v(m),d;

    for(int i=0; i<m; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    for(int i=0; i<m; i++)
    {
        if(v[i]-f-1==0)
        {
            f=v[i];
            continue;
        }
        d.push_back(v[i]-f-1);
        f=v[i];
        sm=min(sm,d[j++]);
    }

    if(n-f!=0)
    {
        d.push_back(n-f);
        sm=min(sm,d[j]);
    }
    for(int i=0; i<d.size(); i++)
    {
        ans+=((d[i]+sm-1)/sm);
    }
    cout<<ans<<'\n';

    return 0;
}
