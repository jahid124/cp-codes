#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
bool a[1500],b[1500];

void setab()
{
    for(int i=0; i<1500; i++)
    {
        a[i]=0;
        b[i]=0;
    }
}

bool checka(int m,int n)
{
    for(int i=m; i<=n; i++)
    {
        if(a[i])
            return 1;
    }
    return 0;
}

bool checkb(int m, int n)
{
    for(int i=m; i<=n; i++)
    {
        if(b[i])
            return 1;
    }
    return 0;
}

int main()
{
    ll T,t=1;
    cin>>T;
    while(T--)
    {
        setab();
        ll n;
        cin>>n;
        string s="";
        bool f=0;
        int start[n+5],en[n+5];

        for(int i=0; i<n; i++)
        {
            cin>>start[i];
            cin>>en[i];
            en[i]=en[i]-1;
        }

        for(int i=0; i<n; i++)
        {
            if(!checka(start[i],en[i]))
            {
                for(int k=start[i]; k<=en[i]; k++)
                {
                    a[k]=1;
                }
                s=s+'J';
            }

            else if(!checkb(start[i],en[i]))
            {
                //cout<<"enter\n";
                for(int k=start[i]; k<=en[i]; k++)
                {
                    b[k]=1;
                }
                s=s+'C';
            }
            else
            {
                f=1;
                break;
            }

        }
        if(f==1)
            cout<<"Case #"<<t<<": IMPOSSIBLE\n";
        else
            cout<<"Case #"<<t<<": "<<s<<"\n";
        t++;
    }
}
