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
        int n;
        cin>>n;
        ll arr[n+5],mul=1,x=1000000000000000000;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            ll t=mul;
            t=t*arr[i];
            if(t/arr[i]!=mul || t>x)
            {
                f=1;
                break;
            }
            else mul*=arr[i];

        }
        if(f) cout<<"NO\n";
        else cout<<"YES\n"<<mul<<"\n";
    }
}
