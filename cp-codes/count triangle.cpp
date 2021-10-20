#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int i,j,k,t,cs=1,s;
    vector<int>a;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        for(i=0; i<n;i++)
        {
            cin>>s;
            a.pb(s);
        }
        sort(a.begin(),a.end(),greater<int>());

        for(i=0;i<n-2;i++)
        {
            for(j=i+1;j<n-1;j++)
            {
                for(k=j+1;k<n;k++)
                {
                    if((a[i]+a[j])>a[k] && (a[i]+a[k])>a[j] && (a[k]+a[j])>a[i] )
                    {
                        c++;
                    }
                    else
                        break;
                }
            }
        }
        cout<<"Case "<<cs<<": "<<c<<"\n";
        cs++;
    }
}
