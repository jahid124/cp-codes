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
    int t,cs=1,cnt=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        int pos=n-1,i=n-1;
        while(i>=0)
        {
            int f=1;
            if(pos>i) pos=i;
            if(pos>0)
            {
                while(s[pos]!=s[pos-1])
                {
                    pos--;
                    if(pos<=0) break;
                }

                if(pos>=0)
                {
                    f=0;
                    s.erase(s.begin()+pos);
                    i--;
                }
            }
            if(f==0)
            {
                char c=s[i];
                while(s[i]==c)
                {
                    --i;
                    if(i<0) break;
                }
            }
            else
            {
                --i;
                char c=s[i];
                while(s[i]==c)
                {
                    --i;
                    if(i<0) break;
                }
            }
            cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
