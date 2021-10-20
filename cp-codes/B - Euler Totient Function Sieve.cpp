#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

vector<ll> prime_factors(ll n)
{
    vector<ll>pf;
    if(n%2==0)
    {
        pf.pb(2);

        while(n%2==0)
        {
            n/=2;
        }
    }

    for(ll i=3; i*i<=n; i=i+2)
    {
        if(n%i==0)
        {
            pf.pb(i);
        }
        while(n%i==0)
        {
            n/=i;
        }
    }
    if(n>1) pf.pb(n);
    return pf;
}


int main()
{
    ll a,b;
    cin>>a>>b;
    for(ll i=a; i<=b; i++)
    {
        vector<ll> pf=prime_factors(i);
        ll ans=i;
        for(int j=0; j<pf.size(); j++)
            ans-=(ans/pf[j]);
        cout<<ans<<"\n";
    }
    return 0;
}


