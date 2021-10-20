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
        int n,a;
        cin>>n;
        vector<int>v;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.pb(a);

        }

        int tem=v[0],f;
        if(v[0]>0) f=0;
        if(v[0]<0) f=1;
        for(int i=0;i<n;i++)
        {
            if(v[i]>0 )
            {
                if(f==1)
                {
                    sum+=tem;
                    f=0;
                    tem=v[i];
                }
                else
                {
                    if(tem<v[i])
                        tem=v[i];
                }

            }

            if(v[i]<0)
            {
                if(f==0)
                {
                    sum+=tem;
                    f=1;
                    tem=v[i];
                }
                else
                {
                    if(tem<v[i])
                        tem=v[i];
                }
            }
        }


        cout<<sum+tem<<"\n";
    }
}
