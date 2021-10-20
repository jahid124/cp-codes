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
        int n,a,b;
        cin>>n>>a>>b;
        string tem,s;
        for(int i=0;i<b;i++)
        {
            tem=tem+char(97+i);
        }
        for(int i=0;i<(a-b);i++)
            tem=tem+char(97);
        for(int i=0;i<n/a;i++)
        {
            s=s+tem;
        }
        for(int i=0;i<n%a;i++)
        {
            s=s+tem[i];
        }
        cout<<s<<"\n";
    }
}
