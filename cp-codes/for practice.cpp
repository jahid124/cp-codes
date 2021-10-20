#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    ///freopen("0output.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        bool f=0;
        cin>> n;
        for(ll i=0; 2*i*i<=n; i++ )
        {
            ll a=(i*i);
            ll b=sqrt(n-a);
            if(a+b*b==n)
            {
                f=1;break;
            }
        }
        f? cout<<"Yes\n":cout<<"No\n";
    }
    return 0;
}
