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
        ll n,i,cnt=0,div=1,tem,x=0,y=1;
        cin>>n;
        tem=n;
        for(i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                tem=n;
                x=0;
                while(tem%i==0)
                {
                    x++;
                    tem/=i;
                }
                if(cnt<x)
                {
                    y=tem;
                    div=i;
                    cnt=x;
                }
            }
        }

        if(div==1)
        {
            cout<<1<<"\n"<<n<<endl;
            continue;
        }

        cout<<cnt<<endl;
        for(int j=0; j<cnt-1; j++)
        {
            cout<<div<<" ";
        }
        cout<<div*y<<endl;

    }
    return 0;
}
