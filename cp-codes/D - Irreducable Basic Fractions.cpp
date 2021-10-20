#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

vector<int> prime_factors(int n)
{
    vector<int>pf;
    if(n%2==0)
    {
        pf.pb(2);

        while(n%2==0)
        {
            n/=2;
        }
    }

    for(int i=3; i*i<=n; i=i+2)
    {
        if(n%i==0)
        {
            pf.pb(i);
        }
        while(n%i==0)
        {
            n/=i;
        }
    }
    if(n>1) pf.pb(n);
    return pf;
}

int main()
{
    int n;
    cin>>n;
    while(n)
    {

        vector<int>pf=prime_factors(n);

        int ans=n;
        for(int i=0; i<pf.size(); i++)
        {
            ans=ans-(ans/pf[i]);
        }
        cout<<ans<<"\n";
        cin>>n;
    }
    return 0;
}
