#include<bits/stdc++.h>
using namespace std;
bool prime(int n,int i)
{
    if(n<3)
        return 0;
    if(n%i==0)
        return 1;
    if(i*i>n)
        return 0;
    return prime(n,i+1);
}
int main()
{
    prime(18,2)==0? cout<<" prime":cout<<"not primr";
}
