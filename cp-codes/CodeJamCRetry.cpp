#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC

void mapini(map<int,int>m)
{
    for(int i=0;i<1500;i++)
        m[i]=0;
}

void vecini(vector<int>v)
{
    for(int i=0;i<1500;i++)
        v.pb(0);
}

int main()
{
    ll T,t=1;
    cin>>T;
    while(T--)
    {
        int n;
        vector<int>st,en,cn(1500,0);
        map<int , int>m;
        mapini(m);
        //for(int i=0;i<1500;i++)cout<<m[i]<<" ";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            st.pb(a);
            en.pb(b);
        }
        for(int i=0;i<n;i++)
        {
            m[st[i]]++;
            m[en[i]]--;
        }
        //vecini(cn);
        //for(int i=0;i<1500;i++)cout<<cn[i]<<" ";
        cn[0]=m[0];
        for(int i=1;i<=1440;i++)
        {
            cn[i]=cn[i-1]+m[i];
        }
        int ma=0;
        string s="";
        bool f=0,f2=0;
        //for(int i=0;i<1500;i++)cout<<cn[i]<<" ";
        for(int i=0;i<n;i++)
        {
            for(int k=st[i];k<en[i];k++)
            {
                if(ma<cn[k])
                    ma=cn[k];
            }
            if(ma==1)
                s=s+'J';
            else if(ma==2)
            {
                if(f2==0)
                {
                    s=s+'C';
                    f2=1;
                }
                else
                {
                    s=s+'J';
                    f2=0;
                }

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
