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
    vector<int> vc;
    unordered_map<int,bool> mp;
    while(t--)
    {
        vc.clear();
        mp.clear();
        int n,ans=0;
        cin>>n;

        vc.resize(n);

        for(int i=0; i<n; i++) cin>>vc[i];

        for(int i=0; i<n; i++)
        {
            int sum=vc[i];
            for(int j=i+1; j<n; j++)
            {
                sum+=vc[j];
                if(sum>n) break;
                mp[sum]=1;
            }
        }

        for(int i=0; i<n; i++)
        {
            if(mp[vc[i]]) ans++;
        }

        cout<<ans<<endl;
    }
    return 0;
}
