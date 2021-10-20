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
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size(),ans=0,f=0,l=n-1,fc=0,a=0,b=0;

        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='A')
            {
                if(b==0) ans++;
                else b--;
            }
            else
            {
                b++;
            }
        }
        if(b%2==0) cout<<ans<<"\n";
        else cout<<ans+1<<"\n";

    }
    return 0;
}
