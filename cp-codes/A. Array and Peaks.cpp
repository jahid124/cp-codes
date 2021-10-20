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

        if((n-1)/2<k){
            cout<<"-1\n";
            continue;
        }

        cout<<"1 ";
        for(int i=2; i*2<=n+1; i++){
                if(i-1>k) break;
                if(i*2==(n+2)){
                    cout<<i<<endl;
                    break;
                }
            cout<<(n-i+2)<<" "<<i<<" ";

        }

        for(int i=k+2; i<=n-k; i++) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
