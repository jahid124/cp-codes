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
    int t,cs=1,c=0;
    cin>>t;
    while(t--)
    {
        int n,avg,z=0,o=0,t=0,a;
        ll cnt;
        cin>>n;
        avg=n/3;
        vector<int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>a;
            if(a%3==0) z++;
            if(a%3==1) o++;
            if(a%3==2) t++;
        }

        if(z>=avg and o>=avg)
        {
            cnt=(z-avg)*2 + (o-avg);
        }

        if(z>=avg and t>=avg)
        {
            cnt=(z-avg) + (t-avg)*2;
        }

        if(o>=avg and t>=avg)
        {
            cnt=(o-avg)*2 + (t-avg);
        }

        if(z>avg and o<=avg and t<=avg)
        {
            cnt=(avg-o) + (avg-t)*2;
        }

        if(o>avg and z<=avg and t<=avg)
        {
            cnt=(avg-t) + (avg-z)*2;
        }

        if(t>avg and o<=avg and z<=avg)
        {
            cnt=(avg-z) + (avg-o)*2;
        }

        cout<<cnt<<endl;
    }
    return 0;
}
