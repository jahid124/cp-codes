#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n<=k) cout<<k-n<<"\n";
        else
        {
            if((n%2==0 && k%2==0) || (n%2==1 && k%2==1)) cout<<"0\n";
            else cout<<"1\n";
        }
    }
    return 0;
}
