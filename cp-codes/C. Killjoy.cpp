#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define flw freopen ("0output.txt","w",stdout)
#define flr freopen ("0input.txt","r",stdin)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// MUST ADD

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,sum=0;
        cin>>n>>x;
        vector<int>vc(n);
        for(int i=0; i<n; i++) cin>>vc[i];
        for(int i=0; i<n; i++) sum+=vc[i];

        int f=0,ff=0;
        for(int i=0; i<n; i++)
        {
            if(vc[i]==x) f=1;
            if(vc[i]!=x) ff=1;
            if(f and ff) break;
        }

        if(ff==0) cout<<"0\n";
        else if(sum==x*n || f) cout<<"1\n";
        else cout<<"2\n";
    }
    return 0;
}
