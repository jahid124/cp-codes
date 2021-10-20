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
        int n,m;
        cin>>n>>m;

        string s[n],t[m],r[n-1],x[m];

        for(int i=0; i<n; i++) cin>>s[i];
        for(int i=0; i<n-1; i++) cin>>r[i];

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                t[i]+=s[j][i];
            }
        }
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                x[i]+=r[j][i];
            }
        }
        string ans="";
        for(int i=0; i<m; i++)
        {
            sort(t[i].begin(),t[i].end());
            sort(x[i].begin(),x[i].end());
            //cout<<t[i]<<" n "<<x[i]<<endl;
            for(int j=0; j<n-1; j++)
            {
                if(t[i][j]!=x[i][j])
                {
                    ans+=t[i][j];
                    break;
                }
            }
            if(ans.size()==i)
            {
                ans+=t[i][n-1];
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}

