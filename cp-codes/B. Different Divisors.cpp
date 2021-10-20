#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC

bool prime[1000005];

void seive(long long int n)
{
    for(int i=3; i*i<=n;i+=2)
    {
        if(prime[i]==false)
        {
            for(int j=i*i;j<=n;j+=2*i)
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

int main()
{
    seive(1000000);
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        ll d,a,b,f=0;
        cin>>d;

        a=1+d;

        while(f==0)
        {
            if(p(a))
            {
                f=1;
            }
            else a++;
        }

        f=0;

        b=a+d;
        while(f==0)
        {
            if(p(b))
            {
                f=1;
            }
            else b++;
        }

        cout<<a*b<<endl;
    }
    return 0;
}
