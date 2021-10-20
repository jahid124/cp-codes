#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    fastio;
    deque<ll>dq;
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int a;
        cin>>a;
        if(a==0)
        {
            int d;
            ll x;
            cin>>d>>x;
            if(d) dq.push_back(x);
            else dq.push_front(x);
        }
        else if(a==1)
        {
            int p;
            cin>>p;
            cout<<dq.at(p)<<"\n";
        }
        else{
            int d;
            cin>>d;
            if(d) dq.pop_back();
            else dq.pop_front();
        }
    }
    return 0;
}
