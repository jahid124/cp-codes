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

ll m[205][15];
ll nCr(int a, int b)
{

    if(b==0 || a==b)
        return 1;

    if(m[a][b]>0)
        return m[a][b];

    return m[a][b]=nCr(a-1,b-1)+nCr(a-1,b);

}

int main()
{
    int l;
    cin>>l;
    cout<<nCr(l-1,11)<<'\n';
    return 0;
}
