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
    int a,b;
};

bool srt(pr x, pr y)
{
    return x.a>y.a;
}

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        pr p;
        ll w,sum=0;
        int n,z;
        cin>>n>>w;
        vector<pr> vc;
        for(int i=0; i<n; i++)
        {
            cin>>z;
            p.a=z;
            p.b=i+1;
            vc.pb(p);
        }
        sort(vc.begin(), vc.end(), srt);

        int f=0,i=0;

        while(i<n and vc[i].a>w)
        {
            i++;
        }

        int idxf=i;

        while(i<n)
        {
            sum+=vc[i].a;
            if(sum*2>=w and sum<=w)
            {
                f=1;
                break;
            }
            i++;
        }



        if(f)
        {
            cout<<i-idxf+1<<"\n";
            while(idxf<=i)
            {
                cout<<vc[idxf].b<<" ";
                idxf+=1;
            }
        }
        else cout<<-1;
        cout<<"\n";
    }
    return 0;
}
