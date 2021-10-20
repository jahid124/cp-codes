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
        map<int, int > mp;
        int p=n, i=n-1;

        for(int j=0; j<n; j++) cin>>vc[j];

        int z=n;
        while(i>=0)
        {
            while(mp[p]) p--;

            while(i>=0 and vc[i]!=p)
            {
                mp[vc[i]]=1;
                i--;
            }

            for(int j=max(i,0); j<z; j++)
            {
                cout<<vc[j]<<" ";
            }
            z=i;
            p--;
        }

        cout<<endl;


    }
    return 0;
}
