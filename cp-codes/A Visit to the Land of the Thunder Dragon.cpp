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
        vector<ll> v(3);
        cin>>v[0]>>v[1]>>v[2];

        sort(v.begin(), v.end());

        if(v[0]==v[1] && v[2]==v[1] && v[2]==v[0])
        {
            cout<<"0\n";
            return 0;
        }

        cout<<max(v[2]-1-v[1],(ll)0) + max(v[2]-1-v[0],(ll) 0)<<'\n';
    return 0;
}
