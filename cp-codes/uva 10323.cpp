#include<bits/stdc++.h>
using namespace std;
int i=2;
long long int a[999999];
long long int rec(int n)
{
    if(n==1 || n==0)
        return 1;
    else if(a[n]>0)
        return a[n];
    else
        a[n]=n*rec(n-1);
        return a[n];
}
int main()
{
    //cout<<ar[0];
    long long int x;
    int y;
    while(cin>>y)
    {
        if(y<0 && y%2==0)
        {
            cout<<"Underflow!"<<endl;
        }
        else if(y<0 && y%2!=0)
        {
            cout<<"Overflow!"<<endl;
        }
        else if(y>13)
        {
            cout<<"Overflow!"<<endl;
        }
        else if(y<8)
        {
            cout<<"Underflow!"<<endl;
        }
        else
        {
            x=rec(y);
            cout<<x<<endl;
        }
    }
}
