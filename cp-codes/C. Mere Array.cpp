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
        int n,small=INT_MAX;
        cin>>n;
        vector<int>v,tem;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.pb(a);
            small=min(small,a);
        }

        tem=v;

        sort(tem.begin(),tem.end());
        bool f=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]%small!=0)
            {
                if(v[i]!=tem[i])
                {
                    f=1;
                    break;
                }
            }
        }

        f?cout<<"NO\n":cout<<"YES\n";
    }
    return 0;
}
