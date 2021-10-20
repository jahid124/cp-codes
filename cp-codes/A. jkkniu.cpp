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
    int a,b;
    cin>>a>>b;
    if(b==0)
    {
        cout<<"V\n"; return 0;
    }
    char c;
    double ans=0;
    ans=a+b;
    c='J';
    if(ans<a-b)
    {
        ans=a-b;
        c='B';
    }
    if(ans<a*b)
    {
        ans=a*b;
        c='G';
    }
    if(ans<(double)(a/b))
    {
        ans=a/b;
        c='V';
    }
    cout<<c<<"\n";
    return 0;

}
