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
        int n,ans=100000000,sol;
        cin>>n;
        vector<int>vc(n);
        map<int, int> mp;

        for(int i=0; i<n; i++)
        {
            cin>>vc[i];
            mp[vc[i]]++;
        }

        for(int i=0; i<n; i++)
        {
            if(mp[vc[i]]==1)
            {
                if(ans>vc[i]) sol=i;
                ans=min(ans,vc[i]);
            }
        }
        if(ans<100000000)
        {
            cout<<sol+1<<endl;
        }
        else cout<<"-1\n";
    }
    return 0;
}
