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
        int n,cnt=0,fnd=1;
        cin>>n;

        vector<int> vc(n);

        for(int i=0; i<n; i++) cin>>vc[i];

        for(int i=0; i<n-1; i++)
        {
            for(int j=i; j<n; j++)
            {
                if(vc[j]==fnd)
                {
                    cnt+=(j-i+1);
                    fnd++;
                    reverse(vc.begin()+i, vc.begin()+j+1);
                    //cout<<i<<" "<<j<<endl;
                    //for(int x=0; x<n; x++) cout<<vc[x]<<"" ; cout<<endl;
                    break;
                }
            }
        }

        cout<<"Case #"<<cs++<<": "<<cnt<<"\n";
    }
    return 0;
}
