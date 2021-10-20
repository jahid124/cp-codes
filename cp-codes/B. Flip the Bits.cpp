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
        int n,z=0,o=0,m=0;
        cin>>n;
        string a,b;
        cin>>a>>b;

        vector<bool>v(n,0);

        for(int i=0; i<n; i++)
        {
            if(a[i]=='0') z++;
            else o++;

            if(z==o) v[i]=1;
        }

        int f=0;
        for(int i=n-1; i>=0; i--)
        {
            if(f==1)
            {
                if(a[i]=='0') a[i]='1';
                else a[i]='0';
            }
            if(a[i]!=b[i])
            {
                if(!v[i]){
                    cout<<"NO\n";
                    m=1;
                    break;
                }

                if(f==0) f=1;
                else f=0;
            }
        }

        if(m==0)
        cout<<"YES\n";
    }
    return 0;
}
