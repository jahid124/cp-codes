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
        int n,cnt=0;
        string s;
        //cin>>n>>s;
        cin>>s;
        n=s.size();

        for(int i=0; i<n; i++)
        {
            if(s[i]=='0') cnt++;
        }

        if(n%2==1)
        {
            if(s[n/2]=='0')
            {
                if(((cnt-1)/2)%2==0) cout<<"BOB\n";
                else cout<<"ALICE\n";
            }
            else
            {
                if((cnt/2)%2==0) cout<<"DRAW\n";
                else cout<<"BOB\n";
            }
        }
        else
        {
            if((cnt/2)%2==0) cout<<"DRAW\n";
            else cout<<"BOB\n";
        }

    }
    return 0;
}
