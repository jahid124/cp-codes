#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll max=INT_MIN,maxend=0,st=0,e=0,s=0;
        for(int i=0;i<n;i++)
        {
            maxend+=a[i];
            if(max<maxend)
            {
                max=maxend;
                st=s;
                e=i;
            }
            if(maxend<0)
            {
                s=i+1;
                maxend=0;
            }
        }
        if(max<m)
            cout<<"Dari uthe na, meye pote na\n";
        else
        cout<<"uff handsomeness "<<max<<" on day "<<e+1<<"\n";
    }
}
