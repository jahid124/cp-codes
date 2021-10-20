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
        int n,z=0,o=0;
        string s;
        cin>>n;
        cin>>s;

        for(int i=1; i<n; i++)
        {
            if(s[i]=='0' and s[i-1]=='0') z++;
            if(s[i]=='1' and s[i-1]=='1') o++;
        }
        if(s[0]=='0' and s[n-1]=='0') z++;
        if(s[0]=='1' and s[n-1]=='1') o++;
        cout<<max(o,z)<<"\n";
    }
    return 0;
}
