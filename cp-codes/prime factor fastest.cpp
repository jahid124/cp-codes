#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 10000000;
int lp[N+1];
vector<int> pr;
void sieve()
{
    for (int i=2; i<=N; ++i)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            pr.push_back (i);
        }
        for (int j=0; j<(int) pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
            lp[i * pr[j]] = pr[j];
    }
}

int main()
{
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
           cout<<lp[n]<<endl;
    }
}
