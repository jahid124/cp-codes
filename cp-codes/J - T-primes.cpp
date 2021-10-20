#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mx 1000005

bool prime[mx];

void sieve()
{
    prime[0]=1;
    prime[1]=1;
    for(int i=2; i*i<=mx;i++)
    {
        if(prime[i]!=1)
        {
            for(int j=i*i;j<=mx;j=j+i)
            {
                prime[j]=1;
            }
        }
    }
}



int main()
{
    sieve();
    ///cout<<prime[1000000];
    ///for(int i: prime) cout<<i<<" ";
    /*int cnt=1;
    for(int i=0;i<=1000000;i++)
    {
        if(!prime[i]) cout<<i<<endl;
    } cout<<cnt;*/
    int t;
    cin>>t;
    while(t--)
    {
        ll num;
        cin>>num;
        if(num<4) cout<<"NO\n";
        else{
            ll tem=round(sqrtl(num));ll temnum;
            temnum=tem*tem;
            if(num==temnum and prime[tem]==0) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}
