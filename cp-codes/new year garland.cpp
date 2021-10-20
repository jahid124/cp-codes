#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll int a[4];
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        int n = sizeof(a)/sizeof(a[0]);
        sort(a,a+n);
        if(a[0]+a[1]<a[2]-1)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
}
