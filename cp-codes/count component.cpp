#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define flw freopen ("0output.txt","w",stdout)
#define flr freopen ("0input.txt","r",stdin)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// MUST ADD
vector<int>gr[100010];
bool visit[100010];

void dfs(int u)
{
    visit[u]=1;

    for(auto v: gr[u])
        if(!visit[v])
            dfs(v);
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

    int cnt=0;

    for(int i=1; i<=n; i++)
    {
        if(!visit[i])
        {
            cnt++;
            dfs(i);
        }
    }
    cout<<cnt<<endl;
}
