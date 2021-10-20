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
        int n,u,r,d,l;
        cin>>n>>u>>r>>d>>l;

        if(n-2>=u and n-2>=r and n-2>=d and n-2>=l)
        {
            cout<<"YES\n";
            continue;
        }
        else
        {
            if(n-1==u)
            {
                if(l==0 and r==0)
                {
                    cout<<"No\n";
                    continue;
                }
            }

            if(n-1==r)
            {
                if(u==0 and d==0)
                {
                    cout<<"No\n";
                    continue;
                }
            }

            if(n-1==l)
            {
                if(u==0 and d==0)
                {
                    cout<<"No\n";
                    continue;
                }
            }

            if(n-1==d)
            {
                if(l==0 and r==0)
                {
                    cout<<"No\n";
                    continue;
                }
            }

            if(n==u)
            {
                if(l==0 or r==0)
                {
                    cout<<"No\n";
                    continue;
                }
            }

            if(n==d)
            {
                if(l==0 or r==0)
                {
                    cout<<"No\n";
                    continue;
                }
            }

            if(n==l)
            {
                if(u==0 or d==0)
                {
                    cout<<"No\n";
                    continue;
                }
            }

            if(n==r)
            {
                if(u==0 or d==0)
                {
                    cout<<"No\n";
                    continue;
                }
            }

            if(n==u and n==d)
            {
                if(l<2 and r<2)
                {
                    cout<<"No\n";
                    continue;
                }
            }

            if(n==l and n==r)
            {
                if(u<2 and d<2)
                {
                    cout<<"No\n";
                    continue;
                }
            }

            if(n-1==u and n-1==d)
            {
                if(l==0 or r==0)
                {
                    cout<<"No\n";
                    continue;
                }
            }

            if(n-1==l and n-1==r)
            {
                if(u==0 or d==0)
                {
                    cout<<"No\n";
                    continue;
                }
            }

            if((n-1==l and n==r) or (n==l and n-1==r))
            {
                if(u<2 and d<2)
                {
                    cout<<"No\n";
                    continue;
                }
            }

            if((n-1==u and n==d) or (n==u and n-1==d))
            {
                if(l<2 and r<2)
                {
                    cout<<"No\n";
                    continue;
                }
            }

            cout<<"Yes\n";
        }
    }
    return 0;
}
