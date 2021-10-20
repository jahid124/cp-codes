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
set<int>comp[100010];
void dfs(int u, int c)
{
    comp[c].insert(u);
    visit[u]=1;

    for(auto v: gr[u])
        if(!visit[v])
            dfs(v,c);
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

    int cnt=-1;

    for(int i=1; i<=n; i++)
    {
        if(!visit[i])
        {
            cnt++;
            dfs(i,cnt);
        }
    }

    map<int,int>mp;
    set<int>st;
    for(int i=0; i<=cnt; i++)
    {
        mp[*comp[i].begin()]=i;
        st.insert(*comp[i].begin());
    }

    int q,a,b;
    cin>>q;

    for(int i=0; i<q; i++)
    {
        cin>>a>>b;
        auto s=lower_bound(st.begin(),st.end(),a);
        if(*s!=a)
        {
            s=(s+1);
        }
        else s=(s-st.begin());

        bool ans=comp[mp[s]].count(b);

        if(b) cout<<"Yes\n";
        else cout<<"No\n";
    }

    cout<<cnt<<endl;
}
