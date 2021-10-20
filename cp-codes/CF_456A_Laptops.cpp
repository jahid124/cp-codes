#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0;
    cin>>n;
    int a[n+5],b[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]!=b[i])
            f=1;
    }
    if(f==1)
        cout<<"Happy Alex\n";
    else
        cout<<"Poor Alex\n";
}
