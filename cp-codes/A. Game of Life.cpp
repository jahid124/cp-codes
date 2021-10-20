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
        int n,m;
        cin>>n>>m;
        string s,tem;
        cin>>s;

        //vector<int>vc(n);

        //for(int i=0; i<n; i++) cin>>vc[i];

        for(int i=0; i<min(1000,m); i++)
        {
            tem=s;
            for(int j=1; j<n-1; j++)
            {
                if((tem[j-1]=='1' and tem[j+1]=='0') || (tem[j-1]=='0' and tem[j+1]=='1'))
                {
                    s[j]='1';
                }
            }
            if(tem[1]=='1') s[0]='1';
            if(tem[n-2]=='1') s[n-1]='1';
        }

        cout<<s<<endl;
    }
    return 0;
}

