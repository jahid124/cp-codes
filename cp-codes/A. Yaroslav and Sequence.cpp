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
    int n,a,sum=0,sm=2000,cnt=0;
    cin>>n;
    vector<int>vc;
    for(int i=0; i<2*n-1; i++)
    {
        cin>>a;
        if(a<0)
            cnt++;
        sm=min(sm,abs(a));
        sum+=abs(a);
        //vc.pb(abs(a));

    }

    //sort(vc.begin(), vc.end());

    if(n%2==0 and cnt%2==1) sum-=(2*sm);

    cout<<sum<<endl;

    return 0;
}
