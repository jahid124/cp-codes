#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int c,m,g,l,s,t,q;
    cin>>q;
    while(q!=0)
    {
        cin>>c>>m>>g;
        l=c>m?m:c;
        s=c+m+g;
        t=s/3;
        if(t>l)
            cout<<l<<endl;
        else
            cout<<t<<endl;
        q--;
    }

}
