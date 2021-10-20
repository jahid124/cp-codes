#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mx 10000001
bool prime[mx];
vector<int>p;
void seive()
{
    prime[1]=1;
    for(int i=2; i*i<=mx;i++)
    {
        if(!prime[i])
        {
            for(int j=i*i; j<=mx; j+=i)
                prime[j]=1;
        }
    }

    for(int i=2; i<mx; i++)
    {
        if(prime[i]==0)
        {
            p.pb(i);
        }
    }
}

void solve(ll n)
{
    seive();
    int cnt=0;
    for(int i=0; i<p.size() && n>=p[i]*p[i];  i++)
    {
        cnt++;
    }
    cout<<cnt;
}

int main()
{

    solve(1000000000000000);
    ll t;
    cin>>t;
    while(t)
    {

    }
}
