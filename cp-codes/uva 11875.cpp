#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,a[10],i,j,p;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>l;
        p=l/2;
        for(j=0;j<l;j++)
        {
            cin>>a[j];
        }
        cout<<"Case "<<i<<": "<<a[p]<<endl;
    }
}
