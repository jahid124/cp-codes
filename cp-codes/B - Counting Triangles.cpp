#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define sortv(x) sort(x.begin(),x.end())
int main()
{
    //fastio;
    int t,cs=1;
    cin>>t;
    while(t--)
    {

        int n,i,j,k;
        vector<int>v;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            int a;
            scanf("%d",&a);
            v.pb(a);
        }
        sortv(v);

        ll ans=0;
        for(i=0;i<n-2;i++)
        {
            for(j=i+1;j<n-1;j++)
            {
                ll num=lower_bound(v.begin(),v.end(),v[i]+v[j])-v.begin()-j-1;
                ans+=num;
                //cout<<num<<" "<<ans<<"\n";
            }
        }
        printf("Case %d: ",cs);
        printf("%lld\n",ans);
        cs++;
    }
}
