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
        ll n,x=0;
        cin>>n;
        vector<ll> v(2*n);

        for(int i=0; i<2*n; i++) cin>>v[i];

        unordered_set<ll> s;

        for(int i=0; i<2*n; i++)
        {
            for(int j=i+1; j<2*n; j++)
            s.insert(v[i]+v[j]);
        }

        if(s.size()==(2*n*n-n)) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
