#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int fun(string &s)
{
    int res=0,cnt=0,cur;
    bool ok;
    for(ll i=0;; i++)
    {
        cnt++;
        cur=i;
        ok=true;
        for(int j=0; j<s.size(); j++)
        {
            res++;
            cnt++;
            if(s[i]=='+')
            {
                cur++;
            }
            else
                cur--;
            if(cur<0)
            {
                //cout<<i<<" "<<j<<"\n";
                ok=false;
                break;
            }
        }
        if(ok)
        {
            //cout<<i<<"\n";
            break;
        }

    }
    ///cout<<"loop= "<<cnt<<"\n";
    return res;
}

int main()
{
    cout<<setprecision(20)<<exp(1)<<"\n";
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool fnd=0;
        ll res=0,tem=3;
        if(s[0]=='-')
            res=2;
        else
        {
            res=1;
            fnd=1;
        }
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]=='+')
            {
                res++;
                fnd=1;
            }

            else if(s[i]=='-' && fnd==0)
            {
                res+=tem;
                tem++;
            }
            else
                res++;
        }
        if(res==fun(s))
            cout<<"True\n";
        cout<<res<<"\n";
    }
}
