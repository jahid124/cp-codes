#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,all=0,i;
        cin>>n;
        ll s,a[n+1];
        cin>>s;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(all+a[i]>s)
            {
                all+=a[i];
                break;
            }

            else
                all+=a[i];
        }
        //cout<<i<<"\n";
        if(all<=s)
            cout<<"0\n";
        else
            cout<<n-i<<"\n";
    }
}
