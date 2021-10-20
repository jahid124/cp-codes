#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define flw freopen ("0output.txt","w",stdout)
#define flr freopen ("0input.txt","r",stdin)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// MUST ADD
#define no1s(x) __builtin_popcount(x)
#define parity(x) __builtin_parity(x)
#define leadingZeros(x) __builtin_clz(x)
#define trailingZeros(x) __builtin_ctz(x)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,a;
        cin>>n;
        vector<int> vc;

        for(int i=0; i<n; i++)
        {
            cin>>a;
            vc.push_back(log2(a));
        }
        sort(vc.begin(), vc.end());
        ll ans=0;

        //for(int i=0; i<n; i++) cout<<vc[i]<<" "; cout<<endl;

        for(int i=0; i<n;i++)
        {
            ll cnt=0,j;
            for(j=i+1; j<n; j++)
            {
                if(vc[i]==vc[j]) cnt++;
                else
                {
                    i=j-1;
                    break;
                }
            }

            ans+=((cnt*(cnt+1))/2);
            if(j==n) break;

        }

        cout<<ans<<"\n";

    }
}
