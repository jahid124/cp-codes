#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%4==0)
        {
            cout<<"YES\n";
            int a=2,b=1;
            ll s=0,s2=0;
            for(int i=0;i<n/2;i++)
            {
                cout<<a<<" ";
                s2+=a;
                a=a+2;
            }
            for(int i=1;i<n/2;i++)
            {
                cout<<b<<" ";

                s+=b;
                b=b+2;
            }
            cout<<s2-s<<"\n";
        }
        else cout<<"NO\n";
    }
}
