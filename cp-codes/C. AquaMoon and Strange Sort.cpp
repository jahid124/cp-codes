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

struct pr{
    int idx,val;
};

bool logic(pr a, pr b)
{
    return a.val<b.val;
}

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<pr>vc(n),tem(n);
        vector<int>dif(100005,0);

        for(int i=0; i<n; i++)
        {
            cin>>vc[i].val;
            vc[i].idx=i;
        }
        tem=vc;
        sort(tem.begin(),tem.end(), logic);

        for(int i=0; i<n; i++)
        {
            dif[tem[i].val]+=abs(i-tem[i].idx);
        }
        int f=0;
        for(int i=1; i<=100000; i++)
        {
            if(dif[i]%2==1)
            {
                f=1;
                break;
            }
        }
        f?cout<<"NO\n":cout<<"YES\n";
    }
    return 0;
}

