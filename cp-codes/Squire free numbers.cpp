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

int main()
{
    fastio;
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,x,y;
        cin>>a>>b;
        if(a>b) swap(a,b);
        n=b-a+1;
        x=floor(sqrtl(a));
        y=ceil(sqrtl(b));
        if(x*x<a) x++;
        if(y*y>b) y--;
        cout<<n-(y-x+1)<<"\n";
    }
    return 0;
}
