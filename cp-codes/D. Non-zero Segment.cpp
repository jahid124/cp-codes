#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define flw freopen ("0output.txt","w",stdout)
#define flr freopen ("0input.txt","r",stdin)
#define no1s(x) __builtin_popcount(x)
#define parity(x) __builtin_parity(x)
#define leadingZeros(x) __builtin_clz(x)
#define trailingZeros(x) __builtin_ctz(x)
#define mx 100005
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE

int main()
{
    int n;
    cin>>n;
    vector<int>num(n+1),p(n);

    for(int i=0; i<n; i++)
        cin>>num[i];

    set<ll>st;
    ll ans=0,sz,sum=0;
    st.insert(0);

    for(int i=0; i<n; i++)
    {
        sum+=num[i];
        sz=st.size();
        st.insert(sum);
        if(sz==st.size())
        {
            sum=num[i];
            ans+=1;
            st.clear();
            st.insert(sum);
            st.insert(0);
        }
    }

    cout<<ans<<"\n";
    return 0;
}
