#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int a=0;
    if(n!=0)
        a=n+sum(n-1);
    return a;
}
int main()
{
    int x;
    while(cin>>x)
    {
        cout<<sum(x)<<endl;
    }
}
