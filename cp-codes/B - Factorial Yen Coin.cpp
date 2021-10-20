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
    vector<ll> coin(10);
    coin[0]=1;
    for(int i=2; i<=10; i++)
    {
        coin[i-1]=coin[i-2]*i;
    }

    ll p,ans=0;
    cin>>p;

    for(int i=9; i>=0; i--)
    {
        if(coin[i]<=p)
        {
            ans+=min((ll)100, p/coin[i]);
            p-=min((ll)100, p/coin[i])*coin[i];
        }
    }
    cout<<ans<<"\n";
    return 0;
}

