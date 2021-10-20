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
        string s,t;
        cin>>s>>t;
        int ls=s.size(),lt=t.size();

        int gcd=__gcd(ls,lt);

        int lcm=(ls*lt)/gcd;

        int l1=lcm/ls,l2=lcm/lt;

        string s1,s2;

        for(int i=0; i<l1; i++) s1+=s;
        for(int i=0; i<l2; i++) s2+=t;

        if(s1==s2) cout<<s1<<endl;
        else cout<<"-1\n";
    }
    return 0;
}
