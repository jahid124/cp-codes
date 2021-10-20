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
        map<int,int>mp;
        unordered_set<int>st;
        vector<int>v,vt;
        int n;
        cin>>n;
        for(int i=0; i<2*n; i++)
        {
            int a;
            cin>>a;
            vt.pb(a);
        }
        for(int i=0; i<vt.size(); i++)
        {
            if(mp[vt[i]]==0){
                v.pb(vt[i]);
                mp[vt[i]]=1;
            }
        }

        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
