#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    set<ll>s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        bool a;
        cin>>a;
        if(!a)
        {
            ll b;
            cin>>b;
            s.insert(b);
            cout<<s.size()<<"\n";
        }
        else
        {
            ll b;
            cin>>b;
            if(s.find(b)==s.end())
            cout<<"0\n";
            else cout<<"1\n";
        }
    }
    return 0;
}
