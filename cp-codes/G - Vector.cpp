#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{

    vector<ll>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==0)
        {
            ll b;
            cin>>b;
            v.push_back(b);
        }
        else if(a==2)
        {
            v.pop_back();
        }

        else{
                ll b;
        cin>>b;
            cout<<v[b]<<"\n";
        }
    }
}
