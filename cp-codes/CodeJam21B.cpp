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
        int x,y,ans=0,i=0;
        string s;
        cin>>x>>y>>s;

        while(s[i]=='?')
            i++;

        int f=1;

        while(i<s.size() && f)
        {
            f=0;
            for(int j=i+1; j<s.size(); j++)
            {
                if(s[j]=='C')
                {
                    f=1;
                    if(s[i]=='J')
                    {
                        ans+=y;
                        i=j;
                        break;
                    }
                    else
                    {
                        i=j;
                        break;
                    }

                }
                else if(s[j]=='J')
                {
                    f=1;
                    if(s[i]=='C')
                    {
                        ans+=x;
                        i=j;
                        break;
                    }
                    else
                    {
                        i=j;
                        break;
                    }
                }
            }
        }

        cout<<"Case #"<<cs++<<": "<<ans<<"\n";

    }
    return 0;
}
