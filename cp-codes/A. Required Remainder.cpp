#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        int t=n/x;
        t=t*x;
        if(t+y<=n)
            cout<<t+y<<'\n';
        else
            cout<<t-x+y<<'\n';
    }
    return 0;
}
