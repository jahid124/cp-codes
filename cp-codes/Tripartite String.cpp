#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
ll gcd(ll a,ll b)
{
    if(a<b)
        swap(a,b);
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    ll x=gcd(a,b);
    return (a*b)/x;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,ans=1,r;
        cin>>n;
        ll arr[n+5];
        for(int i=0; i<n;i++) cin>>arr[i];
        cin>>r;
        for(int i=0;i<n;i++) ans=lcm(ans,arr[i]);
        cout<<ans+r<<"\n";
    }
    return 0;
}
