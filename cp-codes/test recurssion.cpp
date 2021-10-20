#include<bits/stdc++.h>
using namespace std;
void p(int n)
{
    if(n!=1) p(n-1);
    cout<<n<<" ";
    if(n==1) return;
}
int main()
{
    p(100);
    return 0;
}

