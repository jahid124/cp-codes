#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a<b)
        swap(a,b);
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    int x=gcd(a,b);
    return (a*b)/x;
}
int main()
{
    cout<<gcd(10,27)<<" ";
    cout<<lcm(10,18);
}
