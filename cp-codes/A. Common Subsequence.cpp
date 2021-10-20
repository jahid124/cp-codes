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
        vector<int>vn,vm;
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            vn.pb(a);
        }
        int ans=0;
        for(int i=0;i<m;i++)
        {
            int a;
            cin>>a;
            vm.pb(a);
        }
        sort(vn.begin(),vn.end());
        sort(vm.begin(),vm.end());
        int i,j;
        for(i=0,j=0;i<vn.size() && j<vm.size();)
        {
            if(vn[i]==vm[j])
            {
                ans=vn[i];
                break;
            }
            else if(vn[i]>vm[j]) j++;
            else i++;
        }
        if(ans==0) cout<<"NO\n";
        else cout<<"YES\n1 "<<ans<<"\n";
    }
    return 0;
}
