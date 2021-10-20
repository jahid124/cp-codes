#include<iostream>
using namespace std;
bool prime(int n)
{
    if(n<2 || n%2==0) return false;
    if(n==2 || n==3) return true;
    for(int i=5;i*i<=n;i+=2)
        if(n%i==0)
            return false;
    return true;
}
template <typename T>
void p(T x)
{
   cout<<x<<endl;
}
