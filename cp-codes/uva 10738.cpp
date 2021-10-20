#include<bits/stdc++.h>
using namespace std;
#define max 1000005
bool prime[1000000];
int mu[max],m[max];


void seive()
{
    for(int i=3; i*i<=max;i+=2)
    {
        if(prime[i]==false)
        {
            for(int j=i*i;j<=max;j+=2*i)
            {
                prime[j]=true;
            }
        }


    }
}

bool p(int n)
{
    if(n<2 || prime[n]==true || (n&&1==0 && n!=2))
        return 0;
    return 1;

}

int main()
{
    seive();
}
