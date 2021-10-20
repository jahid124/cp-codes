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
#define md 1000000007
///mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0,f;
        ll ans=1,ans1=1;
        cin>>n;

        vector<ll>vc(n);


        for(int i=0; i<n; i++) cin>>vc[i];

        f=vc[0];
        for(int i=1; i<n; i++) f&=vc[i];

        for(int i=0; i<n; i++){
            if(vc[i]==f) cnt++;
        }

        if(cnt<2){
            cout<<"0\n";
            continue;
        }

        //cout<<f<<" t "<<cnt<<endl;
        /**for(int i=1; i<=cnt; i++){
            ans*=i;
            ans%=md;
        }**/

        ans=cnt*(cnt-1);

        for(int i=1; i<=n-2; i++){
            ans1*=i;
            ans1%=md;
        }

        //cout<<ans<<" x "<<ans1<<endl;
        cout<<((ans%md)*(ans1%md))%md<<endl;




    }
    return 0;
}
