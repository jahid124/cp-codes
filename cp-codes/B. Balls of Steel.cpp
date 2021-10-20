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

struct xy
{
    int x,y;
};

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<xy>vc(n);

        for(int i=0; i<n; i++)
        {
            cin>>vc[i].x>>vc[i].y;
        }
        bool ok=false;
        for(int i=0; i<n; i++)
        {
            bool tem=true;
            for(int j=0; j<n; j++)
            {
                if( (abs( vc[i].x - vc[j].x ) + abs( vc[i].y - vc[j].y)) > k)
                {
                    //cout<<i<<j<<endl;
                    tem=false;
                    break;
                }
            }
            if(tem)
            {
                ok=true;
                break;
            }
        }
        ok? cout<<"1\n": cout<<"-1\n";
    }
    return 0;
}
