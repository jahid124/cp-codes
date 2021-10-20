#include<bits/stdc++.h>
using namespace std;
bool prime[1000005];
#define max 1000005
int nopd[max];
vector <int> arr[max];
#define pb push_back

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

void nod()
{
    for(int i=2; i<=max; i++)
    {
        for(int j=i; j<=max; j+=i)
        {
            nopd[j]++;
            arr[j].pb(i);
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
    int n;
    cout<<clock();
    const auto start=clock();//int a;cin>>a;
    seive(1000000);
    const auto end=clock();
    cout<<(end-start)*10000.0/CLOCKS_PER_SEC;


    while(cin>>n)
    {

        cout<<p(n);
    }
}
