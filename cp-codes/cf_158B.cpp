#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[n+2],c=0,l=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=n-1; i>=l; i--)
        {
            int tem=0;
            while(a[i]+a[l]+tem<=4 && i>l)
            {
                tem+=a[l];
                l++;
            }
            c++;
        }
        cout<<c<<"\n";
    }
}
