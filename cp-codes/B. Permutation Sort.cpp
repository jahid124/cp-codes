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
        int n,f=0,ff=0,ans;
        cin>>n;

        vector<int> vc(n);

        for(int i=0; i<n; i++)
        {
            cin>>vc[i];
        }

        if(vc[0]==n)
        {
            if(vc[n-1]==1)
            {
                cout<<"3\n";
                continue;
            }
            else
            {
                cout<<"2\n";
                continue;
            }

        }

        for(int i=0; i<n; i++)
        {
            if(i+1!=vc[i])
            {
                f=1;
            }
        }
        if(f==0)
        {
            cout<<"0\n";
            continue;
        }

        if(vc[0]==1)
        {
                cout<<"1\n";
                continue;

        }

        if(vc[n-1]==n)
        {
                cout<<"1\n";
        }

        else
            cout<<"2"<<endl;
    }
    return 0;
}
