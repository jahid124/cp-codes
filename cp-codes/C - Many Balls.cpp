#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pii pair<int,int>
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
#define inf 1000000005
///mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE

int main()
{
    int t=1,cs=1;
    //cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<char> c;
        while(n!=0)
        {
            if(n&1)
            {
                --n;
                c.pb('A');
            }
            else
            {
                c.pb('B');
                n/=2;
            }
        }
        for(int i=c.size()-1; i>=0; i--) cout<<c[i];
        cout<<endl;
    }
    return 0;
}

