#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

struct point
{
    int a,b;
    bool operator <(const point &x) const
    {
        if(a+b<x.a+x.b) return true;
        return false;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        point p,q;
        int x1,y1;
        cin>>x1>>y1;
        p.a=x1;
        p.b=y1;
        cin>>x1>>y1;
        q.a=x1;
        q.b=y1;
        if(p<q) cout<<"P is small\n";
        else cout<<"p is not small\n";
    }
}
