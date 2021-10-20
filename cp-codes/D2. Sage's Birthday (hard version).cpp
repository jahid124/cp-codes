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
    vector<int>num(n),ans(n);
    for(int i=0; i<n; i++)
        cin>>num[i];
    sort(num.begin(),num.end());
    int x=0;
    for(int i=0,j=1; i<n/2; i++)
    {
        ans[j]=num[i];
        j+=2;
    }

    for(int i=n/2,j=0; i<n; i++)
    {
        ans[j]=num[i];
        j+=2;
    }

    for(int i=1; i<n-1; i++)
    {
        if(ans[i]<ans[i+1] and ans[i]<ans[i-1]) x++;
    }
    cout<<x<<"\n";
    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
