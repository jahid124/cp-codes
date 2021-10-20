#include<bits/stdc++.h>
using namespace std;
int len(string s)
{
    int i,c=0,m=0,l;
    l=s.size();
    for(i=0;i<l;i++)
    {
        if(s[i]=='x')
        {
            if(m<c)
                m=c;
            c=0;
        }
        else
            c++;
    }
    return m;
}
int main()
{
    string s;
    cin>>s;
    cout<<len(s);
}
