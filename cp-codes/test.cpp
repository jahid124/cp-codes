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
int arr[7]={11,111,11111,111111,1111111,11111111,11111111};
int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n,rs,rm,f=0;
        cin>>n;

        for(int i=6; i>=1; i--)
        {
            rs=n/arr[i];
            rm=n%arr[i];
            if(rs>rm) f=1;
        }

        f && n%11==0? cout<<"Yes\n": cout<<"No\n";
    }
    return 0;
}

