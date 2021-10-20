#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mx 200005
int phi[mx];
ll s[mx];
vector<ll>sum;

void phi_gen()
{
    for(int i=0; i<mx; i++)
    {
        phi[i]=i;
    }

    for(int i=2; i<mx; i++)
    {
        if(phi[i]==i)
        {
            for(int j=i; j<mx; j+=i)
            {
                phi[j]-=(phi[j]/i);
            }
        }
    }
    s[0]=phi[0];
    sum.pb(s[0]);
    for(int i=1; i<mx; i++)
    {
        s[i]=s[i-1]+phi[i];
        sum.pb(s[i]);
    }
}

int main()
{
    phi_gen();
    ll n;
    cin>>n;
    while(n)
    {
        if(n==1)
        {
            cout<<"0/1"<<"\n";
            cin>>n;continue;
        }
        --n;
        int pos=lower_bound(sum.begin(),sum.end(),n)-sum.begin();

        int extra=n-sum[pos-1],cnt=0,lob;
        for(int i=1; i<=pos; i++)
        {
            if(__gcd(i,pos)==1)
                cnt++;
            lob=i;
            if(cnt==extra)
                break;
        }

        cout<<lob<<"/"<<pos<<endl;
        cin>>n;
    }
    return 0;
}
