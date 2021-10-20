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
        int n,k;
        cin>>n>>k;
        string f,s;
        cin>>f>>s;

        vector<int> a(30,0),b(30,0);

        for(int i=0; i<n; i++)
        {
            a[f[i]-'a'+1]++;
            b[s[i]-'a'+1]++;
        }

        int ain=a[1],bin=0,ff=0;
        for(int i=1; i<=26; i++)
        {
            if(ain<b[i] || (ain-b[i])%k!=0)
            {
                ff=1;
                break;
            }
            else
            {
                ain+=a[i+1];
                ain=ain-b[i];
            }

        }

        if(ff) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
