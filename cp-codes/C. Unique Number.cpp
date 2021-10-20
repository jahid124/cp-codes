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
        if(n<10)
        {
            cout<<n<<endl;
            continue;
        }

        if(n<18)
        {
            cout<<n-9<<"9\n";
            continue;
        }
        if(n<25)
        {
            cout<<n-17<<"89\n";
            continue;
        }
        if(n<31)
        {
            cout<<n-24<<"789\n";
            continue;
        }
        if(n<36)
        {
            cout<<n-30<<"6789\n";
            continue;
        }
        if(n<40)
        {
            cout<<n-35<<"56789\n";
            continue;
        }
        if(n<43)
        {
            cout<<n-39<<"456789\n";
            continue;
        }
        if(n<45)
        {
            cout<<n-42<<"3456789\n";
            continue;
        }
        if(n<46)
        {
            cout<<n-44<<"23456789\n";
            continue;
        }
        else cout<<"-1\n";
    }
    return 0;
}
