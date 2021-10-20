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
        int a,b,x,y,ans;
        cin>>a>>b;
        if(a<b) swap(a,b);
        x=min((a-b),b);
        b=b-x;
        ans=x;
        if(b!=0)
        ans+=(2*b)/3;
        cout<<ans<<"\n";
    }
}
