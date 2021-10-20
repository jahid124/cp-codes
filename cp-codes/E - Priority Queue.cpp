#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    priority_queue<ll> pq;
    string s;
    cin>>s;
    while(s!="end")
    {
        if(s=="insert")
        {
            ll n;
            cin>>n;
            pq.push(n);
        }
        else
        {
            ll n=pq.top();
            cout<<n<<"\n";
            pq.pop();
        }
        cin>>s;
    }

}
