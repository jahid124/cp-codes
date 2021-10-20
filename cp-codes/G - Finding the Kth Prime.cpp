#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool prime[10000001];
#define mx 10000000
int nopd[mx];
vector <int> arr[mx];

void seive()
{
    for(int i=3; i*i<=mx;i+=2)
    {
        if(prime[i]==false)
        {
            for(int j=i*i;j<=mx;j+=2*i)
            {
                prime[j]=true;
            }
        }


    }
}

int main()
{
    seive();
}
