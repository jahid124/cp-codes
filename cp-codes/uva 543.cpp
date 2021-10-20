#include<bits/stdc++.h>
using namespace std;
bool prime[1000000];

void seive(long long int n)
{
    for(int i=3; i*i<=n; i+=2)
    {
        if(prime[i]==false)
        {
            for(int j=i*i; j<=n; j+=2*i)
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
    int n,i;
    seive(1000000);
    cin>>n;
    while(n!=0)
    {
        for(i=3; i<=n/2; i=i+2)
        {
            if(p(i)>0 && p(n-i)>0)
            {
                cout<<n<<" = "<<i<<" + "<<n-i<<endl;
                break;
            }
        }
        cin>>n;
    }

}
