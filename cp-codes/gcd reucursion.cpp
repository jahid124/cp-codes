#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    int x;
    if(a>0)
        swap(a,b);
    while(b%a!=0)
    {
        x=b;
        b=a;
        a=x%b;
    }
    return a;
}
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        cout<<gcd(x,y)<<endl;
    }
}
