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
#define mx 100005
#define inf 1000000005
///mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE

int main()
{
    int t=1,cs=1;
    cin>>t;
    ll arr[15];
    arr[0]=0;
    arr[1]=1;
    for(int i=2; i<15; i++) arr[i]=arr[i-1]*i;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;

        if(k==0 || k==1) cout<<"NO\n";
        else if(k==2)
        {
            if(m==0 && n==1) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(k==3)
        {
            if(n<15 && m==arr[n-1]) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else
        {
            if((n-1)<=m)
            {
                if(n>=15) cout<<"YES\n";
                else if(m<=arr[n-1]) cout<<"YES\n";
                else cout<<"NO\n";
            }
            else cout<<"NO\n";
        }
    }
    return 0;
}

