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
        string s;
        cin>>s;
        int f=0;

        for(int i=0; i<s.size(); i++) if(s[i]!='a') f=1;

        if(f==0)
        {
            cout<<"NO\n";
            continue;
        }

        cout<<"YES\n";

        int i;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]!='a')
            {
                break;
            }
        }

        int n=s.size();
        for(int j=0; j<n; j++)
        {
            cout<<s[j];
            if(j==n-(i+1)) cout<<"a";
        }
        cout<<endl;

    }
    return 0;
}
