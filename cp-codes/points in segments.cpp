#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    ///fastio;
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        printf("Case %d:\n",cs);
        cs++;
        int n,q;
        scanf("%d %d",&n,&q);
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int a;
            scanf("%d",&a);
            v.push_back(a);
        }

        while(q--)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            int ans=upper_bound(v.begin(),v.end(),b)-lower_bound(v.begin(),v.end(),a);
            printf("%d\n",ans);
        }
    }
    return 0;
}
