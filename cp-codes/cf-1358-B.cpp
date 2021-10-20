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
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            v.pb(a);
        }

        sort(v.begin(),v.end());
        int ans=1;
        for(int i=1; i<=n; i++)
        {
            if(v[i-1]<=i)
                ans=i+1;
        }
        cout<<ans<<"\n";
    }
}
