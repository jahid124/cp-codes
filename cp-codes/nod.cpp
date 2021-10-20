#include<bits/stdc++.h>
using namespace std;
#define mx 1000006
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
int cnt=0;
void sieve_dev(int n)
{
    vector<int > vec[n+5];
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j=j+i)
        {
            cnt++;
            vec[j].pb(i);
            nod[j]++;
            sod[j]+=i;
        }
    }
}

int main()
{
    sieve_dev(10e6);
    cout<<cnt;
    return 0;
}
