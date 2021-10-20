#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    while(cin>>n>>m)
    {
        if(n>m)
        {
            swap(n,m);
        }
        cout<<(m-n)<<endl;
    }
}
