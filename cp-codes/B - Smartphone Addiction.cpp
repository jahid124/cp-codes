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
//#define mx 100005
///mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE

int main()
{
    ll mx,n,t,l=0,top,f=0;
    cin>>mx>>n>>t;

    vector<ll>vc(2*n);

    for(int i=0; i<2*n; i++)
        cin>>vc[i];
    top=mx;
    for(int i=0; i<2*n; i++)
    {
        //cout<<"mx= "<<mx<<endl;
        if(i%2==1)
        {
            mx=min(top,mx+(vc[i]-l));
            l=vc[i];
        }
        else
        {
            mx=mx-(vc[i]-l);
            if(mx<=0) f=1;
            l=vc[i];
        }

    }

    if(mx-(t-l)>0 && !f) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
