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
#define mx 1005
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE
bool visit[mx];
bool mark[mx];
vector<int>gr[mx];
vector<int>primes;
void prime()
{
    for(int i=2; i*i<=mx; i++)
    {
        mark[1]=1;
        if(!mark[i])
        {
            for(int j=i*i; j<=mx; j+=i)
            {
                mark[j]=1;
            }
        }
    }

    for(int i=2; i<=mx; i++)
    {
        if(!mark[i]) primes.push_back(i);
    }

    for(int i=2; i<=mx; i++)
    {
        int tem=i,pos=0;
        while(tem!=1)
        {
            if(tem%primes[pos]==0)
            {
                gr[i].pb(primes[pos]);
                while(tem%primes[pos]==0)
                    tem/=primes[pos];
                pos++;
            }
            else pos++;
        }
    }
}

struct ab{
    int n,a;
};

int bfs(int u,int x)
{
    ab t;
    t.n=u;
    t.a=0;
    queue<ab>q;
    q.push(t);
    while(!q.empty())
    {
        ab node=q.front();
        if(node.n==x) return node.a;
        q.pop();
        visit[node.n]=1;
        if(node.n*2<=2000 and !visit[node.n*2])
        {
            t.n=node.n*2;
            t.a=node.a+1;
            q.push(t);
            visit[t.n]=1;
        }

        if(node.n+3<=2000 and !visit[node.n+3])
        {
            t.n=node.n+3;
            t.a=node.a+1;
            q.push(t);
            visit[t.n]=1;
        }

        if(node.n-1>0 and !visit[node.n-1])
        {
            t.n=node.n-1;
            t.a=node.a+1;
            q.push(t);
            visit[t.n]=1;
        }
    }
}

int main()
{
    prime();
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        memset(visit,0,sizeof(visit));
        cout<<bfs(a,b)<<"\n";;
    }

    return 0;
}
