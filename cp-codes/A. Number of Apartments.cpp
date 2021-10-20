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
        int n;
        cin>>n;
        if(n<3 || n==4)
        {
            cout<<"-1\n"; continue;
        }

        if(n%3==0)
        {
            cout<<n/3<<" 0 0\n";continue;
        }
        if((n-5)%3==0)
        {
            cout<<(n-5)/3<<" 1 0\n";
        }
        else if((n-7)%3==0)
        {
            cout<<(n-7)/3<<" 0 1\n";
        }
        else cout<<"-1\n";
    }
    return 0;
}
