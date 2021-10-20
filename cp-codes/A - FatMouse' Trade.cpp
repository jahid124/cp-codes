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

struct pairs{
    int a,b;
};

bool cmp(pairs x, pairs y)
{
    return (x.a*1.0/x.b)>(y.a*1.0/y.b);
}

int main()
{
    int m,n;
    cin>>m>>n;
    while(!(m==-1 and n==-1))
    {
        vector<pairs>food;
        for(int i=0; i<n; i++)
        {
            pairs p;
            cin>>p.a>>p.b;
            food.pb(p);
        }

        sort(food.begin(), food.end(),cmp);
        double ans=0;
        for(int i=0; i<n; i++)
        {
            if(food[i].b<=m)
            {
                ans+=food[i].a;
                m-=food[i].b;

            }
            else
            {
                ans+=((food[i].a*1.0/food[i].b)*m);
                break;
            }
        }
        cout<<fixed<<setprecision(3)<<ans<<endl;
        cin>>m>>n;
    }
    return 0;
}
