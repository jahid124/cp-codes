#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

struct value
{
    int a,b;
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,fl=0;
        cin>>n;
        value v[n+5];
        vector<int > x,y;
        for(int i=0; i<n; i++)
        {
            cin>>v[i].a;

        }

        for(int i=0; i<n; i++)
        {
            cin>>v[i].b;
            if(v[i].b)
                x.pb(v[i].a);
            else
                y.pb(v[i].a);
        }

        for(int i=0; i+1<x.size(); i++)
        {
            if(x[i]>x[i+1])
            {
                fl=1;
                break;
            }
        }
        //cout<<y.size();
        for(int i=0; i+1<y.size(); i++)
        {
            //cout<<"l";
            if(y[i]>y[i+1])
            {
                fl=1;
                break;
            }
        }

        if(!fl)
            cout<<"Yes\n";
        else
            cout<<"No\n";


    }
}
