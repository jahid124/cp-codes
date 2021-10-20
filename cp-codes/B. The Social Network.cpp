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

multiset<int>usersPost[mx];
int users[mx];

void merge_set(int a, int b)
{
    for(auto &e: usersPost[b]) usersPost[a].insert(e);
}

int findParentN(int a)
{
    if(users[a]==a) return a;
    int x=findParentN(users[a]);
    return users[a]=x;
}

int findParent(int a)
{
    if(users[a]==a) return a;
    int x=findParent(users[a]);
    merge_set(x,a);
    return users[a]=x;
}

int findParentT(int a)
{
    if(users[a]==a) return a;
    return findParent(users[a]);
}

void connect(int u, int v)
{
    int pa=findParentT(u);
    int pb=findParentT(v);
    if(pa==pb) return;

    pa=findParent(u);
    pb=findParent(v);
    merge_set(pa,pb);
    users[pb]=pa;
}

void setval(int n)
{
    for(int i=1; i<=n; i++)
    {
        users[i]=i;
        usersPost[i].clear();
    }
}


int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        cout<<"Case "<<cs++<<":\n";
        int n,q;
        cin>>n>>q;
        setval(n);

        while(q--)
        {
            int x;
            cin>>x;
            if(x==0)
            {
                int u,v;
                cin>>u>>v;
                connect(u,v);
            }
            else if(x==1)
            {
                int u,t;
                cin>>u>>t;
                usersPost[findParentN(u)].insert(t);
            }
            else
            {
                int u,l,r,p;
                cin>>u>>l>>r;

                p=findParentN(u);

                cout<<distance(usersPost[p].lower_bound(l),usersPost[p].upper_bound(r))<<'\n';

            }
        }
    }
    return 0;
}
