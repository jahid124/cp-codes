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
        int n;
        cin>>n;
        vector<int>vc(n);

        for(int i=0; i<n; i++) cin>>vc[i];

        sort(vc.begin(), vc.end());

        ll ans=0,x=vc[n-1],sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=vc[i];
            if(i<n-2)
            ans+=(x-vc[i]);
        }


        ll mini=(sum%(n-1));
        if(mini) mini=(n-1)-mini;

        if(ans<vc[n-2])
        {
            cout<<mini<<endl;
        }
        else cout<<max(mini,ans-vc[n-2])<<endl;

    }
    return 0;
}
