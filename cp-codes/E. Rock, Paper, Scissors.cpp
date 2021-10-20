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
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE

int main()
{
    int n;
    cin>>n;
    int a,b,c,x,y,z;
    cin>>a>>b>>c>>x>>y>>z;
    int ans1=min(a,y)+min(b,z)+min(c,x);

    if(a>x)
    {
        a-=x;
        x=0;
    }
    else
    {
        x-=a;
        a=0;
    }

    if(b>y)
    {
        b-=y;
        y=0;
    }
    else
    {
        y-=b;
        b=0;
    }

    if(c>z)
    {
        c-=z;
        z=0;
    }
    else
    {
        z-=c;
        c=0;
    }

    int ans=0;
    if(a>z)
    {
        ans+=(a-z);
        z=0;
    }

    if(b>x)
    {
        ans+=(b-x);
        x=0;
    }

    if(c>y)
    {
        ans+=(c-y);
    }
    cout<<ans<<" "<<ans1<<"\n";
    main();
    return 0;
}
