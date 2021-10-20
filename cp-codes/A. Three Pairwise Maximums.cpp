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
        vector<int>v;
        int a;
        cin>>a;
        v.pb(a);
        cin>>a;
        v.pb(a);
        cin>>a;
        v.pb(a);
        sort(v.begin(),v.end());
        if(v[1]!=v[2]) cout<<"NO\n";
        else
        {
            cout<<"YES\n"<<v[0]<<" "<<v[0]<<" "<<v[2]<<"\n";
        }
    }
    return 0;
}
