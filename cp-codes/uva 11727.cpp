#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b && a>c)
        {
            if(b>c)
                cout<<"Case "<<i<<": "<<b<<endl;
            else
                cout<<"Case "<<i<<": "<<c<<endl;
        }
        else if(b>c && b>a)
        {
            if(a>c)
                cout<<"Case "<<i<<": "<<a<<endl;
            else
                cout<<"Case "<<i<<": "<<c<<endl;
        }
        else
        {
            if(a>b)
                cout<<"Case "<<i<<": "<<a<<endl;
            else
                cout<<"Case "<<i<<": "<<b<<endl;
        }
        i++;
    }
}
