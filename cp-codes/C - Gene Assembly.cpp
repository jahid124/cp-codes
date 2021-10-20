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

struct gene{

    int a,b,n;
};

bool cmp(gene x, gene y)
{
    return x.b<y.b;
}

int main()
{
    int t;
    while(1)
    {
        cin>>t;
        if(t==0) break;
        vector<gene>vc;

        for(int i=0; i<t; i++)
        {
            gene p;
            cin>>p.a>>p.b;
            p.n=i+1;
            vc.push_back(p);
        }
        sort(vc.begin(),vc.end(),cmp);
        int l=INT_MIN;
        for(int i=0; i<t; i++)
        {
            if(l<vc[i].a)
            {
                if(i) cout<<" ";
                cout<<vc[i].n;
                l=vc[i].b;
            }
        }
        cout<<"\n";
    }
}
