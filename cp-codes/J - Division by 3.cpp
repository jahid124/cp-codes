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

ll solve(ll a,ll b)
{
    ll x=(a+2)%3;

    ll ans=b-a+1;

    if(x==0)
    {
        ans--;
        return (ans-(ans/3));
    }
    if(x==1)
    {
        return (ans-(ans/3));
    }
    return (ans-((ans+1)/3));
}

int main()
{
    fastio;
    flw;
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        ll a,b;
        //scanf("%lld %lld",&a,&b);
        cin>>a>>b;
        //printf("Case %d: %lld\n",cs++,solve(a,b));
        cout<< "Case " << cs++ << ": " << solve(a,b) << "\n";
    }
    return 0;
}
