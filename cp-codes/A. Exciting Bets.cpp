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
        ll a,b;
        cin>>a>>b;
        if(a==0 && b==0)
        {
            cout<<"0 0\n";
            continue;
        }
        if(a==0 || b==0)
        {
            cout<<max(a,b)<<" 0\n";
            continue;
        }
        if(a==b)
        {
            cout<<"0 0\n";
            continue;
        }

        cout<<abs(a-b)<<" "<<min( b % abs(a-b),abs(a-b)-(b%abs(a-b)))<<"\n";


    }
    return 0;
}

