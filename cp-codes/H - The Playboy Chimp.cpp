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
    scanf("%d",&t);
    vector<int>v;
    for(int i=0;i<t;i++)
    {
        int a;
        scanf("%d",&a);
        v.pb(a);
    }

    int q;
    scanf("%d",&q);
    while(q--)
    {
        int x;
        scanf("%d",&x);
        auto low = lower_bound(v.begin(),v.end(),x);
        auto up= upper_bound(v.begin(),v.end(),x);
        if(low==v.begin()) printf("X ");
        else  printf("%d ",*(low-1));
        if(up==v.end()) printf("X\n");
        else  printf("%d\n",*(up));
    }
    return 0;
}
