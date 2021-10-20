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
int dp[1010][1010],n,m;
string s1,s2;

int f(int i, int j)
{
    if(i>=n or j>=m) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int res=0;
    if(s1[i]==s2[j]) res=1+f(i+1,j+1);
    else res=max(f(i+1,j), f(i,j+1));
    return dp[i][j]=res;
}

int main()
{
    //flw;
    while(getline(cin,s1) and getline(cin,s2))
    {
        n=s1.size();
        m=s2.size();
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                dp[i][j]=-1;

        ///cin>>s1>>s2;
        cout<<f(0,0)<<"\n";
    }
    return 0;
}
