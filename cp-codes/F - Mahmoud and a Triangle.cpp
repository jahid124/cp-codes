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
    int n;
    cin>>n;
    vector<int>vc(n);
    for(int i=0; i<n; i++)
    {
        cin>>vc[i];
    }
    sort(vc.begin(), vc.end(),greater<int>());
    bool f=0;
    for(int i=0; i<n-2; i++)
    {
        if(vc[i]<(vc[i+1]+vc[i+2]))
        {
            f=1;
            break;
        }
    }
    f?cout<<"YES\n":cout<<"NO\n";
    return 0;
}
