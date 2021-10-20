#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mx 200005
bool prime[mx];
int nopd[mx];
vector <int> arr[mx];
vector<int>tp;

void seive()
{
    for(int i=3; i*i<=mx; i+=2)
    {
        if(prime[i]==false)
        {
            for(int j=i*i; j<=mx; j+=2*i)
            {
                prime[j]=true;
            }
        }


    }
}

bool p(int n)
{
    if(n<2 || prime[n]==true || (n%2==0 && n!=2))
        return 0;
    else
        return 1;

}

void nod()
{
    for(int i=2; i<=mx; i++)
    {
        if(p(i))
        {
            for(int j=i; j<=mx; j+=i)
            {
                nopd[j]++;
                arr[j].pb(i);
            }
        }

    }
}


int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<31) cout<<"NO\n";
        else
        {
            if(n==36) cout<<"YES\n6 10 15 5\n";
            else if(n==40) cout<<"YES\n6 14 15 5\n";
            else if(n==44) cout<<"YES\n6 10 15 13\n";
            else cout<<"YES\n6 10 14 "<<n-30<<"\n";
        }
    }
    return 0;
}
