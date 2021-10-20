#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC

int main()
{
    int t=1,T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int a[n],b[n],x=0,y=0,f=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
                if(!y)
                {
                    f=1;
                    break;
                }
            }
            else if(a[i]<b[i])
            {
                if(!x)
                {
                    f=1;
                    break;
                }
            }
            if(a[i]==1) x=1;
            if(a[i]==-1) y=1;
            if(x && y) break;
        }
        f ?cout<<"NO\n":
         cout<<"YES\n";
    }
}
