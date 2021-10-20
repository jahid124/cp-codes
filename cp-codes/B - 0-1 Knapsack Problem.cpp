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
int n,dp[105][10005],w[105],p[105];

int f(int i, int rem)
{
    if(rem<0) return INT_MIN/2;
    if(i>=n) return 0;
    if(dp[i][rem]!=-1) return dp[i][rem];

    int res=0;
    res=max(f(i+1,rem), p[i]+f(i+1,rem-w[i]));
    return dp[i][rem]=res;
}

int main()
{
    memset(dp,-1,sizeof(dp));
    int wt;
    cin>>n>>wt;
    for(int i=0; i<n; i++)
        cin>>p[i]>>w[i];

    cout<<f(0,wt)<<"\n";


    return 0;
}
