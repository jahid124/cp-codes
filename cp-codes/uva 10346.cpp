#include<bits/stdc++.h>
using namespace std;
//int r,t;
long long int sum(long long int n, long long int k)
{
    long long int r,t;
    r=n%k;
    t=n/k;
    if(n<k)
        return 0;
    return t + sum(t+r,k);
}
int main()
{
    long long int x,y;
    while(cin>>x>>y)
    {
        cout<<sum(x,y)+x<<endl;
    }
}
