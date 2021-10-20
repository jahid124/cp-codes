#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,n,i,t,c=0;
    //cout<<ceil(10/3);
    cin>>r>>n;
    while(!(r<=0 && n<=0))
    {
        c++;
        if(r==0 || n==0)
            cout<<"Case "<<c<<": impossible"<<endl;
        else if(r%n==0)
        {
            t=(r/n)-1;
            if(t>26)
            {
                cout<<"Case "<<c<<": impossible"<<endl;
            }
            else
                cout<<"Case "<<c<<": "<<t<<endl;
        }
        else
        {
            t=(r/n);
            if(t>26)
            {
                cout<<"Case "<<c<<": impossible"<<endl;
            }
            else
                cout<<"Case "<<c<<": "<<t<<endl;
        }

        cin>>r>>n;
    }
}
