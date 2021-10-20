#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio (false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    fastio;
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a,b,v;
        cin>>n>>x>>a>>b;
        v=abs(a-b);
        v+=x;
        if(v>=n)
            cout<<n-1<<"\n";
        else
            cout<<v<<"\n";
    }
    return 0;
}
