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
        int n,m,k,f=0;
        cin>>k>>n>>m;

        vector<int>a(n),b(m),ff;

        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<m; i++)
            cin>>b[i];

        int i=0,j=0;
        while(i<n || j<m)
        {
            if(i>=n)
            {
                if(b[j]==0)
                {
                    ff.pb(b[j]);
                    j++;
                    k++;
                }
                else
                {
                    if(b[j]>k)
                    {
                        f=1;
                        break;
                    }
                    else
                    {
                        ff.pb(b[j]);
                        j++;
                    }

                }

            }
            else if(j>=m)
            {
                if(a[i]==0)
                {
                    ff.pb(a[i]);
                    i++;
                    k++;
                }
                else
                {
                    if(a[i]>k)
                    {
                        f=1;
                        break;
                    }
                    else
                    {
                        ff.pb(a[i]);
                        i++;
                    }
                }

            }
            else if(a[i]==0)
            {
                ff.pb(a[i]);
                i++;
                k++;
            }
            else if(b[j]==0)
            {
                ff.pb(b[j]);
                j++;
                k++;
            }
            else if(a[i]<=b[j])
            {
                if(a[i]>k)
                {
                    f=1;
                    break;
                }
                else
                {
                    ff.pb(a[i]);
                    i++;
                }
            }
            else
            {
                if(b[j]>k)
                {
                    f=1;
                    break;
                }
                else
                {
                    ff.pb(b[j]);
                    j++;
                }
            }
        }
        if(f)
        {
            cout<<"-1\n";
            continue;
        }
        for(int i=0; i<ff.size(); i++)
        {
            cout<<ff[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

