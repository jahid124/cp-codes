#include<bits/stdc++.h>
using namespace std;
#define mx 100006
#define pb push_back
#define ll long long
int nod[mx+5], sod[mx];
bool isprime[mx];
void sieve(int n)
{
    isprime[1]=1;
    for(int i=2; i*i<=n;i++)
    {
        if(isprime[i]!=1)
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                isprime[j]=1;
            }
        }
    }
}

int main()
{
    vector<int>pr;
    for(int i=2; i<100004; i++) if(!isprime[i]) pr.push_back(i);

    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int a,b,k,i=0;
        cin>>a>>b>>k;

        while(k>1 && i<pr.size())
        {
            if(a%pr[i]==0)
            {
                while(k>1 && a%pr[i]==0)
                {
                    a/=pr[i];
                    --k;
                }
            }
        }
        i=0;
        while(k>1 && i<pr.size())
        {
            if(b%pr[i]==0)
            {
                while(k>1 && b%pr[i]==0)
                {
                    b/=pr[i];
                    --k;
                }
            }
        }

        cout<<cnt<<endl;
    }
    return 0;
}
