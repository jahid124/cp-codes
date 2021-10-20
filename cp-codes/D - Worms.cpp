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
    vector<int>v;
    for(int i=0;i<t;i++)
    {
        int a;
        scanf("%d",&a);
        if(!i) v.pb(a);
        else v.pb(v[i-1]+a);
    }

    int m;
    scanf("%d",&m);
    while(m--)
    {
        int q;
        scanf("%d",&q);
        int ans=lower_bound(v.begin(),v.end(),q)-v.begin()+1;
        printf("%d\n",ans);
    }
}
