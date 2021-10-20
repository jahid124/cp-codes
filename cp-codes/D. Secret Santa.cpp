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
///mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n,k=0;
        cin>>n;

        vector<int>a(n);
        vector<int>ans,t,ck(n+5),fa;
        map<int,bool>mp;

        for(int i=0; i<n; i++) cin>>a[i];
        t=a;

        for(int i=0; i<n; i++)
        {
            if(mp[a[i]]==0)
            {

                ck[a[i]]=i;
                k++;
                mp[a[i]]=1;

            }
            else
            {
                a[i]=0;
            }
        }
        for(int i=1; i<=n; i++)
        {
            if(mp[i]==0)
            {
                ans.pb(i);
            }
        }
        int p=0;
        cout<<k<<endl;
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                if(i+1==ans[p])
                {
                    fa[ck[t[i]]]=ans[p++];
                    fa.pb(t[i]);
                }
                else
                fa.pb(ans[p++]);
            }
            else fa.pb(a[i]);
        }
        for(int i=0; i<n; i++)
            cout<<fa[i]<<" ";
        cout<<endl;
    }
    return 0;
}

