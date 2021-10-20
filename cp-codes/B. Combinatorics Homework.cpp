#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pii pair<int,int>
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define flw freopen ("0output.txt","w",stdout)
#define flr freopen ("0input.txt","r",stdin)
#define no1s(x) __builtin_popcount(x)
#define parity(x) __builtin_parity(x)
#define leadingZeros(x) __builtin_clz(x)
#define trailingZeros(x) __builtin_ctz(x)
///#define mx 100005
#define inf 1000000005
///mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE

int main()
{
    int t=1,cs=1;
    cin>>t;
    while(t--)
    {
        int m;
        vector<int> v(3);
        cin>>v[0]>>v[1]>>v[2]>>m;
        sort(v.begin(), v.end());
        int mx=(v[0]+v[1]+v[2])-3;
        int mn=max(0,v[2]-v[1]-v[0]-1);
        if(m>=mn && m<=mx) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}

