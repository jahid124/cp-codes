#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll m[205][15];
ll nCr(int a, int b)
{

    if(b==0 || a==b)
        return 1;

    if(m[a][b]>0)
        return m[a][b];

    return m[a][b]=nCr(a-1,b-1)+nCr(a-1,b);

}

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        ll x;
        x=nCr(a,b);
        cout<<x<<endl;
    }
}
