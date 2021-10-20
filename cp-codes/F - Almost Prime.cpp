#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool prime[3005];
vector<int>p;

void sieve()
{
    prime[1]=1;
    for(int i=2;i*i<=3000;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=3000;j+=i)
                prime[j]=1;
        }
    }

    for(int i=2;i<3000;i++)
    {
        if(prime[i]==0)
        {
            p.pb(i);
            //cout<<i<<endl;
        }
    }
}

int solve(int n)
{
    sieve();
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int cnt=0;
        for(int j=0; j<p.size() && i>=p[j]; j++)
        {
            if(i%p[j]==0) cnt++;
        }
        if(cnt==2) ans++;
    }
    return ans;
}

int main()
{

    int t;
    cin>>t;
    cout<<solve(t)<<"\n";
}
