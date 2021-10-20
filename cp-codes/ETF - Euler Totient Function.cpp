#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mx 1000005
int phi[mx];

void phi_fun()
{
    for(int i=0; i<mx; i++)
        phi[i]=i;

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
}

int main()
{
    phi_fun();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<phi[n]<<"\n";
    }
}
