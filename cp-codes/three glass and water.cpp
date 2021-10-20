#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pii pair<int,int>
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
#define inf 1000000005
///mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE

bool marked[100][100][100];
int a,b,c,t;

bool check(int x, int y, int z)
{
    if(x==t || y==t || z==t) return true;
    if(x>a || y>b || z>c) return;
    if(marked[x][y][z]) return;
    marked[x][y][z]=true;


}

int main()
{
    int t=1,cs=1;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>a>>b>>c>>x>>y>>z>>t;
        cout<<check(x,y,z)?"Yes\n":"No\n";

    }
    return 0;
}

