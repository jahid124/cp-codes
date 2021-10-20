#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
#define ll long long int

ll divide(string s, ll num)
{
    if(s[0]=='0') return 0;
    //cout<<"hhh";
    num=abs(num);

    int sz=s.size(),idx=0;
    ll tem=0;
    if(s[0]=='-')
        idx=1;
    while(idx<sz)
    {
        //cout<<tem<<" ";
        tem*=10;
        tem+=(s[idx]-'0');
        //cout<<tem<<" ";
        tem=tem%num;

        idx++;
    }
    return tem;
}

int main()
{
    int t,tc=1;
    cin>>t;
    while(t--)
    {
        ll d;
        string s;
        cin.ignore();
        cin>>s>>d;
        if(divide(s,d))
            printf("Case %d: not divisible\n",tc);
        else
            printf("Case %d: divisible\n",tc);
        tc++;
    }

}
