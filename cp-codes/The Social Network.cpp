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

void merge_set(int a, int b) /// To merge multi_set a and b to a.
{
    for(auto &e: usersPost[b]) usersPost[a].insert(e);
}

int findParent(int a) /// To find parent of node a.
{
    if(users[a]==a) return a;
    users[a]=findParent(users[a]);
    return users[a];
}

void connect(int u, int v) /// To connect node u and v.
{
    int pa=findParent(u);
    int pb=findParent(v);
    if(pa==pb) return; /// If u and v already in same component then no need to connect them
    merge_set(pa,pb);
    users[pb]=pa;
}

void setval(int n)  /// Reset all things to initial state.
{
    for(int i=1; i<=n; i++)
    {
        users[i]=i;            /// Initially all node's parent set itself.
        usersPost[i].clear();  /// Reset all users post
    }
}


int main()
{
    int t,cs=1;
    scanf("%d",&t);   /// t<=4
    while(t--)
    {
        printf("Case %d:\n",cs++);
        int n,q;
        scanf("%d %d",&n,&q);   /// n<=10e5 and q<=3*10e5.
        setval(n+4);

        while(q--)
        {
            int x;
            scanf("%d",&x);
            if(x==0)
            {
                int u,v;
                scanf("%d %d",&u,&v);
                connect(u,v);
            }
            else if(x==1)
            {
                int u,t;
                scanf("%d %d",&u,&t);
                usersPost[findParent(u)].insert(t);
            }
            else
            {
                int u,l,r,p;
                scanf("%d %d %d",&u,&l,&r);
                p=findParent(u);
                printf("%d\n",distance(usersPost[p].lower_bound(l),usersPost[p].upper_bound(r)));

            }
        }
    }
    return 0;
}
