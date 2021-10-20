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
    vector<int>num(n);
    for(int i=0; i<n; i++) cin>>num[i];
    sort(num.begin(),num.end(),greater<int>());
    cout<<(n-1)/2<<"\n"<<num[0];
    for(int i=1; i<n; i+=2)
    {
        if(i+1<n) cout<<" "<<num[i+1];
        cout<<" "<<num[i];
    }
    cout<<"\n";
    return 0;
}
