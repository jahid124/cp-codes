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
        int n;
        cin>>n;
        ll tot=0,red=0;

        vector<int>vc(n);

        for(int i=0; i<n; i++)
        {
            cin>>vc[i];
        }

        if(n==1)
        {
            cout<<vc[0]<<endl;
            continue;
        }

        for(int i=0; i<n-1; i++)
        {
            tot+=(abs(vc[i]-vc[i+1]));
        }

        tot+=(vc[0]+vc[n-1]);
        //cout<<sum<<endl;

        if(vc[0]>vc[1])
        {
            red+=(vc[0]-vc[1]);
        }
        if(vc[n-1]>vc[n-2]) red+=(vc[n-1]-vc[n-2]);


        for(int i=1; i<n-1; i++)
        {
            if(vc[i]>vc[i+1] && vc[i]>vc[i-1])
            {
                if(vc[i-1]>vc[i+1])
                {
                    red+=(vc[i]-vc[i-1]);
                }
                else red+=(vc[i]-vc[i+1]);
            }
        }

        cout<<tot-red<<endl;
    }
    return 0;
}

