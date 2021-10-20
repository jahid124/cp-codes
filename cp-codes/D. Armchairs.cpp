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

struct st
{
    int o,z;
};

int main()
{
    ll ans=0;
    int n;
    cin>>n;

    vector<int>vc(n);

    for(int i=0; i<n; i++)
    {
        cin>>vc[i];
    }

    vector<st>cnt(n);
    for(int i=0; i<n; i++)
    {
        int z=0,o=0;
        for(int j=i+1; j<n; j++)
        {
            if(vc[j]==1)
                o++;
            else
                z++;
        }

        cnt[i].o=o;
        cnt[i].z=z;
    }

    int d=0;
    for(int i=0; i<n; i++)
    {
        if(vc[i]==3) d--;
        int idx,j,m=100000000;
        if(vc[i]==1)
        {
            if(cnt[i].o>cnt[i].z)
            {
                for(j=i+1; j<n; j++)
                {
                    if(vc[j]==0)
                    {
                        if(m>max(i-j,j-i))
                        {
                            m=max(i-j,j-i);
                            idx=j;
                        }
                    }
                }

                //cout<<m<<"  " <<idx<<endl;
                ans+=m;
                vc[idx]=3;
                continue;
            }
            for(j=i-1; j>=0; j--)
            {
                if(vc[j]==0)
                {
                    if(m>max(i-j,j-i))
                    {
                        m=max(i-j,j-i);
                        idx=j;
                    }
                }
            }

            for(j=i+1; j<n; j++)
            {
                if(vc[j]==0)
                {
                    if(m>max(i-j,j-i))
                    {
                        m=max(i-j,j-i);
                        idx=j;
                    }
                }
            }

            //cout<<m<<"  " <<idx<<endl;
            ans+=m;
            vc[idx]=3;
        }
    }
    cout<<ans<<endl;
    return 0;
}
