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
        int n,cnt=0,i,j,k;
        cin>>n;
        string s,sub="abacaba",tt;
        cin>>s;
        tt=s;
        for(i=0; i<n ; i++)
        {
            if(tt[i]=='?')
                tt[i]='z';
        }

        for(i=0; i<n-6; i++)
        {
            if(s.substr(i,7)==sub)
                cnt++;
        }
        if(cnt>1)
        {
            cout<<"No\n";
            continue;
        }
        if(cnt==1)
        {
            cout<<"Yes\n";
            cout<<tt<<"\n";
            continue;
        }

        for(i=0; i<n-6; i++)
        {
            string tem=s.substr(i,7);
            for(k=0; k<7; k++)
            {
                if(tem[k]==sub[k] || tem[k]=='?')
                    continue;
                break;
            }
            //cout<<k<<endl;
            if(k==7)
            {
                break;
            }
        }
        if(i==n-6)
        {
            cout<<"No\n";
            continue;
        }


        ///cout<<s<<endl;
        cout<<"Yes\n";
        for(k=0; k<i; k++)
            cout<<tt[k];
        cout<<sub;
        for(k=i+7; k<n; k++)
            cout<<tt[k];
        cout<<"\n";
    }
    return 0;
}
