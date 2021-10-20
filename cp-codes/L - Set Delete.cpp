#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    //fastio;
    set<ll>s;
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        int a;
        scanf("%d",&a);
        if(a==0)
        {
            ll b;
            scanf("%lld",&b);
            s.insert(b);
            printf("%d\n",s.size());
        }
        else if(a==1)
        {
            ll b;
            scanf("%lld",&b);
            if(s.find(b)==s.end())
            printf("0\n");
            else printf("1\n");
        }
        else{
            ll b;
            scanf("%lld",&b);
            auto t=s.find(b);
            s.erase(t);
        }
    }
    return 0;
}
