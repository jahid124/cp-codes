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
ll md=1000000000+7;
///mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n,cnt=2;
        cin>>n;
        ll ans=1;

        vector<int>v1(n),v2(n);

        for(int i=0; i<n; i++) cin>>v1[i];
        for(int i=0; i<n; i++) cin>>v2[i];

        map<pair<int, int>, int>mp;

        for(int i=0; i<n; i++)
        {
            mp[{v1[i],v2[i]}]=1;
        }

        for(int i=0; i<n; i++)
        {
            if(mp[{v2[i],v1[i]}]==1) cnt++;
        }

        if(cnt>n) cnt-=2;
        cnt/=2;

        for(int i=0; i<cnt; i++)
        {
            ans*=2;
            ans=ans%md;
        }

        cout<<ans<<endl;
    }
    return 0;
}

