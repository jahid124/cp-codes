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
        int n,c0,c1,h,a;
        cin>>n>>c0>>c1>>h;
        string s;
        cin>>s;

        c0=min(c0,h+c1);
        c1=min(c1,h+c0);

        ll sum=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0') sum+=c0;
            else sum+=c1;
        }
        cout<<sum<<endl;
    }
    return 0;
}
