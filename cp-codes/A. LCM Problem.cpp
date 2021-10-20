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
        int l,r;
        cin>>l>>r;
        if(2*l>r)
        {
            cout<<"-1 -1\n";
        }
        else cout<<l<<" "<<2*l<<"\n";
    }
    return 0;
}
