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
        int n,ans=1000000000,f=0,a;
        cin>>n;
        vector<int>vc,val;
        map<int,int>mp,cnt;

        for(int i=0; i<n; i++)
        {
            cin>>a;
            vc.push_back(a);
        }

        for(int i=1; i<n; i++)
        {
            if(vc[i]!=vc[i-1]) val.push_back(vc[i-1]);
            if(i==n-1) val.push_back(vc[i]);
        }

        for(int i=0; i<val.size(); i++)
        {
            cnt[val[i]]++;
        }

        for(int i=0; i<val.size(); i++)
        {
            if(i==0) cnt[val[i]]--;
            if(i==val.size()-1) cnt[val[i]]--;
            cnt[val[i]]++;

        }

        for(int i=0; i<val.size(); i++)
        {
           ans=min(ans,mp[val[i]]);
        }

        cout<<ans<<endl;

    }
    return 0;
}
