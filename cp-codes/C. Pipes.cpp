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
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;

        int f=0,d=0,res=0;

        for(int i=0; i<n; i++)
        {
            if(f==0)
            {
                if(d==0)
                {
                    if((a[i]-'0')>2)
                    {
                        i--;
                        f=1;
                        d=1;
                    }

                }
                else
                {
                    if((a[i]-'0')>2)
                    {
                        d=0;

                    }
                    else
                    {
                        res=1;
                        break;
                    }
                }
            }
            else if(f==1)
            {
                if(d==0)
                {
                    if((a[i]-'0')>2)
                    {
                        i--;
                        d=1;
                        f=0;
                    }
                }
                else
                {
                    if((a[i]-'0')>2)
                    {
                        d=0;
                    }
                    else
                        {
                            res=1;
                            break;
                        }
                }
            }
        }

        if(res==1)
        {
            cout<<"NO\n";
        }
        else
        {
            if(f==1 and d==0) cout<<"YES\n";
            else cout<<"NO\n";
        }

    }
    return 0;
}
