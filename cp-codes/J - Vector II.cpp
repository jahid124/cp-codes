#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    fastio;
    int n,q;
    cin>>n>>q;
    vector<ll>v[n];
    while(q--)
    {
        int a;
        cin>>a;
        if(a==0)
        {
            int t;
            cin>>t;
            ll x;
            cin>>x;
            v[t].pb(x);
        }
        else if(a==1)
        {
            int t;
            cin>>t;
            for(int i=0; i<v[t].size(); i++)
            {
                cout<<v[t][i];
                if(i+1==v[t].size())
                    continue;
                cout<<" ";
            }
            cout<<"\n";
        }
        else
        {
            int t;
            cin>>t;
            v[t].clear();
        }
    }
    return 0;
}
