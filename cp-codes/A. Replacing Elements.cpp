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
        int n,d,f=0;
        cin>>n>>d;
        vector<int>v(n);

        for(int i=0; i<n; i++) cin>>v[i];

        for(int i=0; i<n; i++)
        {
            if(v[i]>d)
            {
                f=1;
                break;
            }
        }

        if(!f)
        {
            cout<<"Yes\n";
            continue;
        }
        sort(v.begin(), v.end());

        if(v[0]+v[1]>d) cout<<"No\n";
        else cout<<"Yes\n";


    }
    return 0;
}
