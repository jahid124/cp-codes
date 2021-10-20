#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    int n,m=INT_MAX,i;
    cin>>n;
    ll ans=0;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end(),greater<int>());
    ans+=v[0];
    for(i=1;i<(n-1)/2;i++)
    {
        ans+=(2*v[i]);
    }
    if(n%2) ans+=v[i];
    cout<<ans<<"\n";
    return 0;
}
