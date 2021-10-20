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
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// MUST ADD
#define mx 100010
vector<int>gr[mx];
int color[mx];
bool f=0;

void dfs(int u)
{
    color[u]=1;
    for(int v: gr[u])
    {
        if(color[v]==2)
        {
            f=1;
            return;
        }
        if(!color[v])
            dfs(v);
    }
    color[u]=2;
}

int main()
{
    int n,e,u,v;
    cin>>n>>e;
    for(int i=0; i<e; i++)
    {
        cin>>u>>v;
        gr[u].pb(v);
        gr[v].pb(u);
    }
    memset(color,0,n+5);
    for(int i=1; i<=n; i++)
    {
        if(color[i]==0)
        {
            dfs(i);
        }

    }
    f==0?cout<<"YES\n":cout<<"NO\n";
    return 0;
}
