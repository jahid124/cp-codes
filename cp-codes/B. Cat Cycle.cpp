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
        ll n,k,cnt=0;
        cin>>n>>k;

        if(n%2==0)
        {
            cout<<(k-1)%n+1<<endl;
            continue;
        }

        if(k==1)
        {
            cout<<1<<endl;
            continue;
        }

        ll t=k,r=0;
        while(k!=0)
        {
            k+=r;
            ll tem=k/((n+1)/2);
            r=k%((n+1)/2);
            cnt+=tem;
            k=tem;

        }

        cout<<((t+cnt-1)%n)+1<<endl;
    }
    return 0;
}
