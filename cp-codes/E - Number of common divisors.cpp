#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int npd[1000005];
int gcd(int a,int b)
{
    while(a!=0)
    {
        int new_a=b%a;
        int new_b=a;
        a=new_a;
        b=new_b;
    }
    return b;
}

void nopd()
{

    for(int i=2; i<=1000000; i++)
    {
        for(int j=i;j<=1000000;j+=i)
        {
            npd[j]++;
        }
    }
}

int ncd(int a,int b)
{
    int n=gcd(a,b);
    return npd[n]+1;
}

int main()
{
    nopd(); ///return 0;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",ncd(a,b));
    }
}
