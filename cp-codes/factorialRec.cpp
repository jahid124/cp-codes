#include<bits/stdc++.h>
using namespace std;
int rec(int n)
{
    if(n==1 || n==0)
        return n;
    return n*rec(n-1);
}
int main()
{
    cout<<rec(5);
}
