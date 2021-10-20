#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pii pair<int,int>
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
#define inf 1000000005
///mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE

int main()
{
    int t=1,cs=1;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;

        vector<int>vc(n);

        for(int i=0; i<n; i++) cin>>vc[i];

        for(int i=1; i<=n; i++)
        {
            int f=0;
            for(int j=0; j<n; j++)
            {
                if(vc[j]!=j+1)
                {
                    f=1;
                }
            }
            if(f==0) break;
            cnt++;
            if(i%2==1)
            {
                for(int j=0; j<n-1; j+=2)
                {
                    if(vc[j]>vc[j+1])
                    {
                        int t=vc[j];
                        vc[j]=vc[j+1];
                        vc[j+1]=t;
                    }
                }
            }
            else
            {
                for(int j=1; j<n; j+=2)
                {
                    if(vc[j]>vc[j+1])
                    {
                        int t=vc[j];
                        vc[j]=vc[j+1];
                        vc[j+1]=t;
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

