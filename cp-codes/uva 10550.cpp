#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ini,a,b,c,r;
    while(cin>>ini>>a>>b>>c)
    {
        if(a==0 && b==0 && c==0 && ini==0)
            break;
        r=0;
        if(ini-a>=0)
            r=r+(ini-a)*9;
        else
            r+=(ini+40-a)*9;
        if((b-a)>=0)
            r+=(b-a)*9;
        else
            r+=(b+40-a)*9;
        if((b-c)>=0)
            r+=(b-c)*9;
        else
            r+=(b+40-c)*9;

        cout<<r+1080<<endl;

    }

    return 0;

}

