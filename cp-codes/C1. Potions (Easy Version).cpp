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
int arr[2010];
int n,cnt=0;
int dp[2005];
int fun(int pos, int sum)
{
    //if(dp[pos]!=-1) return dp[pos];
    cnt++;
    if(pos>=n)
        return 0;

    int r1=fun(pos+1, sum),r2=0;

    if(sum+arr[pos]>=0)
    {
        sum+=arr[pos];
        r2=1+fun(pos+1, sum);
    }

    return dp[pos]=max(r1,r2);

}

int main()
{
    memset(dp,-1, sizeof(dp));
    cin>>n;

    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<fun(0,0)<<' ';
    cout<<cnt;

    return 0;
}

