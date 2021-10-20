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

int n,m;
vector<int> gr[105],cost[105];
int dist[105];

void dijkstra(int src)
{
    priority_queue<pii,vector<pii>, greater<pii>>pq;
    for(int i=0; i<=n; i++)
        dist[i]=inf;
    dist[src]=0;
    pq.push({0,src});
    while(!pq.empty())
    {
        pii pu=pq.top();
        pq.pop();
        int u=pu.second;
        int c=pu.first;
        for(int i=0; i<gr[u].size(); i++)
        {
            int v=gr[u][i];
            if(cost[u][i]+c<dist[v])
            {
                dist[v]=cost[u][i]+c;
                pq.push({dist[v],v});
            }
        }
    }
}

int main()
{
    int t=1,cs=1;
    cin>>t;
    while(t--)
    {
        int u,v,w;
        cin>>n>>m;
        for(int i=0; i<n+3; i++)
        {
            gr[i].clear();
            cost[i].clear();
        }
        for(int i=0; i<m; i++)
        {
            cin>>u>>v>>w;
            gr[u].pb(v);
            gr[v].pb(u);
            cost[u].pb(w);
            cost[v].pb(w);
        }

        dijkstra(n);
        if(dist[1]<inf) cout<<"Case "<<cs++<<": "<<dist[1]<<"\n";
        else cout<<"Case "<<cs++<<": Impossible\n";
        //for(int i=0; i<=n; i++) cout<<dist[i]<<" ";
    }
    return 0;
}

