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
        int a,b,sz,i=0,ans=0;
        cin>>a>>b;
        string s;
        cin>>s;
        int n=s.size()-1;
        sz=a/b;
        while(i<=n and s[i]=='0')
        {
            i++;
        }
        while(n>=i and s[n]=='0')
        {
            n--;
        }
        for(; i<=n; i++)
        {
            int cnt=0;
            if(s[i]=='0')
            {
                int t=i;
                while(s[t]=='0')
                {
                    cnt++;
                    t++;
                }
                t=i;
                i+=(cnt-1);
                if(cnt<=sz)
                {
                    ans+=(cnt*b);
                    while(cnt--)
                    {
                        s[t++]='1';
                    }
                }
            }
        }

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                while(i<s.size() and s[i]=='1') i++;
                ans+=a;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
