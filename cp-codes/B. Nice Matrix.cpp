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

ll sum4(int a, int b, int c, int d)
{
    vector<int>v{a,b,c,d};
    sort(v.begin(), v.end());
    ll ans=0;
    ans+=abs(v[1]-v[0]);
    ans+=abs(v[3]-v[2]);
    ans+=(2*abs(v[1]-v[2]));
    return ans;
}

ll sum2(int a, int b)
{
    return abs(a-b);
}

int main()
{
    //cout<<sum4(2,3,10,11);
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n,m,a,i,j,l,r;
        cin>>n>>m;
        vector<int>vc[n];
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>a;
                vc[i].pb(a);
            }
        }
        ll ans=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(m-j-1>j)
                {
                    if(n-i-1>i)
                    {
                        ans+=sum4(vc[i][j], vc[i][m-j-1], vc[n-i-1][j], vc[n-i-1][m-j-1]);
                       // cout<<ans<<endl;
                    }
                    else if(n-i-1==i)
                    {
                        ans+=sum2(vc[i][j], vc[i][m-j-1]);
                        //cout<<ans<<endl;
                    }

                }

                else if(m-j-1==j)
                {
                    if(n-i-1!=i and n-i-1>i)
                    {
                        ans+=sum2(vc[i][j], vc[n-i-1][j]);
                        //cout<<ans<<endl;
                    }

                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
