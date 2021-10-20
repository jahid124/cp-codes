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

struct pr{
    ll v,p;
};

int main()
{
    int t=1,cs=1;
    //cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        vector<pr>vc(n+1);

        for(int i=1; i<=n; i++)
        {
            cin>>vc[i].v;
            vc[i].p=0;
        }

        ll val=0;

        for(int i=0; i<m; i++)
        {
            int f;
            cin>>f;

            if(f==1)
            {
                int pp,x;
                cin>>pp>>x;

                vc[pp].v=x;
                vc[pp].p=val;
            }
            else if(f==2)
            {
                int num;
                cin>>num;
                val+=num;
            }
            else
            {
                int pos;
                cin>>pos;

                cout<<vc[pos].v+val-vc[pos].p<<endl;
            }
        }
    }
    return 0;
}

