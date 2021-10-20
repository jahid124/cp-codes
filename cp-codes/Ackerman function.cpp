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
int a[5][100000];
ll cnt=0;
ll acker_fun(ll m, ll n)
{
    cnt=cnt+1;
    cout<<"jj";
    if(a[m][n]) return a[m][n];
    if(m==0) return a[m][n]=n+1;
    if(n==0) return a[m][n]=acker_fun(m-1,1);
    return a[m][n]=acker_fun(m-1,acker_fun(m,n-1));
}

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        //cnt=0;
        ll a,b;
        cin>>a>>b;
        cout<<acker_fun(a,b)<<" "<<cnt<<endl;
    }
    return 0;
}
