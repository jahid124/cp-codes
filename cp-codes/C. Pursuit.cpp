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

        vector<int>a(n),b(n),sa(n),sb(n);

        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        sa[0]=a[n-1];
        sb[0]=b[n-1];

        for(int i=n-2; i>=0; i--)
        {
            sa[n-i-1]=sa[n-i-2]+a[i];
            sb[n-i-1]=sb[n-i-2]+b[i];
        }
        int add=0;
        int ex=0;
        int t=(n+add)-(n+add)/4;
        while(1)
        {
            if(sa[max(0,t-1)] + add*100 >= sb[min(n-1,t-1+ex)]) break;
            add++;
            if((n+add)%4==0) t-=1;
            ex++;
        }
        cout<<add<<endl;
    }
    return 0;
}

