#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
int main()
{
    ll T,t=1;
    cin>>T;
    while(T--)
    {
        ll n,cc=0,cr=0,trc=0;
        cin>>n;
        vector<ll>v;
        for(ll i=0; i<n*n; i++)
        {
            ll a;
            cin>>a;
            v.pb(a);
        }

        for(ll i=0; i<n*n;)
        {
            set<ll>sets;
            for(ll j=0; j<n; j++)
            {
                sets.insert(v[i+j]);

            }
            if(sets.size()<n)
                cr++;
            sets.clear();
            i=i+n;
        }
        for(ll i=0;i<n;i++)
        {
            set<ll>st;
            ll k=i;
            for(ll j=0;j<n;j++)
            {
                st.insert(v[k]);
                k=k+n;
            }
            if(st.size()<n)
                cc++;
            st.clear();
        }

        for(ll i=0;i<n*n;i+=n+1)
        {
            trc=trc+v[i];
        }
        cout<<"Case #"<<t<<": "<<trc<<" "<<cr<<" "<<cc<<"\n";
        t++;
    }
}
