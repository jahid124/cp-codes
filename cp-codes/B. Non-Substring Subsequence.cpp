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
        int n,q,f=0,l=0,a,b;
        cin>>n>>q;
        string s;
        cin>>s;

        while(q--)
        {
            f=0;
            cin>>a>>b;
            for(int i=0; i<a-1; i++)
            {
                if(s[i]==s[a-1])
                {
                    f=1;
                    break;
                }
            }
            for(int i=n-1; i>=b; i--)
            {
                if(s[i]==s[b-1])
                {
                    f=1;
                    break;
                }
            }
            if(f)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }



    }
    return 0;
}
