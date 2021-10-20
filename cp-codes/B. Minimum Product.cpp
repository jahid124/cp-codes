#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define flw freopen ("0output.txt","w",stdout)
#define flr freopen ("0input.txt","r",stdin)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// MUST ADD

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,x,y,n,tem,rem,m,n2,f,g,nt;
        ll ans1,ans2,ans;
        cin>>a>>b>>x>>y>>n;
        if(a>b)
        {
            swap(a,b);
            swap(x,y);
        }
        if(a<=b)
        {
            if(x<y)
            {
                tem=a-x;
                if(tem>=n)
                {
                    a=a-n;
                }
                else
                {
                    n=n-tem;
                    a=x;
                    rem=min(n,b-y);
                    b=b-rem;
                }
            }
            else
            {
                rem=min(n,b-y);
                if(b-rem<x)
                {
                    tem=b-y;
                    if(tem>=n)
                    {
                        b=b-n;
                    }
                    else
                    {
                        n=n-tem;
                        b=y;
                        rem=min(n,a-x);
                        a=a-rem;
                    }
                }
                else
                {
                    tem=a-x;
                    if(tem>=n)
                    {
                        a=a-n;
                    }
                    else
                    {
                        n=n-tem;
                        a=x;
                        rem=min(n,b-y);
                        b=b-rem;
                    }
                }
            }
        }
        ans=a*b;
        cout<<ans<<"\n";

    }
    return 0;
}
