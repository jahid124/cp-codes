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

struct p{
    int to,cost;
};

vector<vector<p>>pairs;

void makepair(int i, int j, int cost)
{
    p p1,p2;
    p1.to=j;
    p2.to=i;
    p1.cost=p2.cost=cost;

    pairs[i].push_back(p1);
    pairs[j].push_back(p2);
}

int main()
{
    int t,n,p;
    cin>>n>>p;
    pairs.resize(n+1);
    for(int i=0; i<p; i++)
    {
        int a,b,cost;
        cin>>a>>b>>cost;
        makepair(a,b,cost);
    }
    for(int i=1; i<pairs.size(); i++)
    {
        cout<<i<<"= "<<endl;
        for(auto x: pairs[i])
        {
            cout<<x.to<<" "<<x.cost<<endl;
        }
        cout<<endl;
    }
}
