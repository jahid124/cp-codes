#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
int make(char a)
{
    return a-'0';
}
int main()
{
    ll T,t=1;
    cin>>T;
    while(T--)
    {
        string s,s1;
        cin>>s;
        int h=0;
        for(ll i=0;i<s.size();i++)
        {
            int a,b;
            a=make(s[i]);
            if(h<a)
            {
                for(int k=0;k<a-h;k++)
                {
                    s1=s1+'(';

                }
                h=a;
                s1=s1+s[i];

            }
            else if(h>a)
            {
                for(int k=0;k<h-a;k++)
                {
                    s1=s1+')';

                }
                h=a;
                s1=s1+s[i];
            }
            else
            {
                s1=s1+s[i];
            }
        }
        for(int k=0;k<h;k++)
        {
            s1=s1+')';
        }

        cout<<"Case #"<<t<<": "<<s1<<"\n";
        t++;
    }
}
