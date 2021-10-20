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
        ll a,b,c;
        cin>>a>>b>>c;
        if(a>=c)
            cout<<"-1 "<<b<<"\n";
        else
        {
            if(a*b>c)
                cout<<"1 "<<b<<"\n";
            else
                cout<<"1 "<<"-1"<<"\n";
        }
    }
    return 0;
}
