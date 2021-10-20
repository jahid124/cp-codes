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

bool isCon(int n, int d)
{
    while(n)
    {
        if(n%10==d) return 1;
        n/=10;
    }

    return 0;
}

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        vector<int>vc(n);
        vector<string> ans;
        for(int i=0; i<n; i++) cin>>vc[i];

        for(int i=0; i<n; i++)
        {
            bool f=0;
            for(int m=0; m<=10; m++)
            {
                if(isCon(vc[i]-d*m,d))
                {
                    f=1;
                    ans.pb("YES");
                    cout<<vc[i]-d*m<<endl;
                    break;
                }
            }

            if(!f) ans.pb("NO");
        }

        for(auto a: ans) cout<<a<<"\n";
    }
    return 0;
}
