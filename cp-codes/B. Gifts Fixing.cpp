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
        int n,mina=INT_MAX,minb=INT_MAX;
        cin>>n;
        vector<int>a,b;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            a.pb(x);
            mina=min(mina,x);
        }

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            b.pb(x);
            minb=min(minb,x);
        }
        ll ans=0;
        for(int i=0; i<n; i++)
        {
            ans+=max(abs(mina-a[i]), abs(minb-b[i]));
        }

        cout<<ans<<"\n";
    }
}
