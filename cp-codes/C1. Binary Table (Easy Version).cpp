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
        int n,m,cnt=0;
        cin>>n>>m;

        string s[n];

        for(int i=0; i<n; i++) cin>>s[i];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(s[i][j]=='1') cnt++;
            }
        }

        cout<<cnt*3<<endl;
        for(int x=0; x<n; x++)
        {
            for(int y=0; y<m; y++)
            {
                if(s[x][y]=='1')
                {
                    if(x==0 and y==0)
                    {
                        cout<<x<<" "<<y<<" "<<x+1<<" "<<y<<" "<<x<<" "<<y+1<<endl;
                        cout<<x<<" "<<y<<" "<<x<<" "<<y+1<<" "<<x+1<<" "<<y+1<<endl;
                        cout<<x<<" "<<y<<" "<<x+1<<" "<<y<<" "<<x+1<<" "<<y+1<<endl;
                    }
                    else if(x==0 and y!=0)
                    {
                        cout<<x<<" "<<y<<" "<<x<<" "<<y-1<<" "<<x+1<<" "<<y<<endl;
                        cout<<x<<" "<<y<<" "<<x+1<<" "<<y-1<<" "<<x+1<<" "<<y<<endl;
                        cout<<x<<" "<<y<<" "<<x+1<<" "<<y-1<<" "<<x<<" "<<y-1<<endl;

                    }
                    else if(x!=0 and y==0)
                    {
                        cout<<x<<" "<<y<<" "<<x-1<<" "<<y<<" "<<x<<" "<<y+1<<endl;
                        cout<<x<<" "<<y<<" "<<x-1<<" "<<y<<" "<<x-1<<" "<<y+1<<endl;
                        cout<<x<<" "<<y<<" "<<x<<" "<<y+1<<" "<<x-1<<" "<<y+1<<endl;
                    }
                    else
                    {
                        cout<<x<<" "<<y<<" "<<x-1<<" "<<y<<" "<<x<<" "<<y-1<<endl;
                        cout<<x<<" "<<y<<" "<<x-1<<" "<<y<<" "<<x-1<<" "<<y-1<<endl;
                        cout<<x<<" "<<y<<" "<<x-1<<" "<<y-1<<" "<<x<<" "<<y-1<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
