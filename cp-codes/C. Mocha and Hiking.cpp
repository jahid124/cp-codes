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

        vector<int>vc(n);

        for(int i=0; i<n; i++) cin>>vc[i];

        if(vc[0]==1)
        {
            cout<<n+1<<" ";
            for(int i=0; i<n; i++) cout<<i+1<<" ";
            cout<<endl;
            continue;
        }

        if(vc[n-1]==0)
        {
            for(int i=0; i<=n; i++) cout<<i+1<<" ";
            cout<<endl;
            continue;
        }

        int f=1;
        for(int i=0; i<n-1; i++)
        {
            if(vc[i]==0 && vc[i+1]==1)
            {
                f=0;
                for(int j=1; j<=i+1; j++) cout<<j<<" ";
                cout<<n+1<<" ";
                for(int j=i+2; j<=n; j++) cout<<j<<" ";
                cout<<endl;
                break;
            }
        }
        if(f==1) cout<<"-1\n";
    }
    return 0;
}

