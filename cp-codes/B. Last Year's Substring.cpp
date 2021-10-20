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
        int n;
        cin>>n;
        string s;
        cin>>s;
       /// cout<<s.substr(n-2,2);
        if(s=="2020")
        {
            cout<<"Yes\n";
            continue;
        }

        if(s.substr(0,4)=="2020" || s.substr(n-4,4)=="2020" || (s[0]=='2' and s.substr(n-3,3)=="020") or (s[0]=='2' and s[1]=='0' and s[n-2]=='2' and s[n-1]=='0') or (s.substr(0,3)=="202" and s[n-1]=='0'))
        {
            cout<<"Yes\n";
        }
        else cout<<"No\n";
    }
    return 0;
}
