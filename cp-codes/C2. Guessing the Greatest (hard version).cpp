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
    ll n;
    cin>>n;

    ll l=1,r=n,m,v1,v2,ans;

    cout<<"? "<<l<<" "<<r<<"\n";
    fflush(stdout);
    cin>>v1;

    while(l<r)
    {

        if(r-l==1)
        {
            cout<<"? "<<l<<" "<<r<<"\n";
            fflush(stdout);
            cin>>v2;

            if(v2==r)
                ans=l;
            else
                ans=r;
            break;
        }

        cout<<"? "<<l<<" "<<v1<<"\n";
        fflush(stdout);
        cin>>v2;

        if(v1==v2)
        {
            m=(l+1+v1)/2;
            cout<<"? "<<l<<" "<<m<<"\n";
            fflush(stdout);
            cin>>v1;

            if(v1==v2) l=m;
            else
            r=m;
        }

        else
        {
            l=v1;
        }


        m=(l+1+r)/2;

        if(v1>=m)
        {
            cout<<"? "<<m<<" "<<r<<"\n";
            fflush(stdout);
            cin>>v2;
            if(v1==v2)
            {
                l=m;
            }
            else
            {
                cout<<"? "<<l<<" "<<m<<"\n";
                fflush(stdout);
                cin>>v2;
                r=m;
                v1=v2;
            }
        }

        else
        {
            cout<<"? "<<l<<" "<<m<<"\n";
            fflush(stdout);
            cin>>v1;
            if(v1==v2)
            {
                r=m;
                v1=v2;
            }
            else
            {
                cout<<"? "<<m<<" "<<r<<"\n";
                fflush(stdout);
                cin>>v2;
                l=m;
                v1=v2;
            }
        }


    }

    cout<<"! "<<ans<<endl;


    return 0;
}

