#include<bits/stdc++.h>
using namespace std;
#define ll long long int

struct p
{
    ll a,b;
};

bool cmp(p x, p y)
{
    return x.a>=y.a;
}
vector<p>vc;
int main()
{
    int t,cs=1;
    cin>>t;


    while(t--)
    {
        int n;
        ll res=0;

        cin>>n;
        vc.resize(n);
        for(int i=0; i<n; i++)
            cin>>vc[i].a;

        for(int i=0; i<n; i++)
            cin>>vc[i].b;

        sort(vc.begin(),vc.end(),cmp);

        for(int i=0; i<n; i++)
        {
            if(res+vc[i].b < vc[i].a)
                res+=vc[i].b;

            else
            {
                res=max(res,vc[i].a);
                break;
            }
        }

        cout<<res<<"\n";


    }
    return 0;
}
