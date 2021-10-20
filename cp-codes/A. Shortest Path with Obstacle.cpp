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
        int ax,ay,bx,by,fx,fy;
        cin>>ax>>ay>>bx>>by>>fx>>fy;

        int ans=abs(ax-bx)+abs(ay-by);
        if(ax==bx && bx==fx )
        {
            if((fy<ay && fy>by) || (fy>ay && fy<by))  ans+=2;
        }
        else if(ay==by && by==fy)
        {
            if((fx<ax && fx>bx ) || (fx>ax && fx<bx )) ans+=2;
        }

        cout<<ans<<endl;
    }
    return 0;
}

