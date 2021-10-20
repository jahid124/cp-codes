#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,e,sum=0,zero=0;
        cin>>n;
        while(n--)
        {
            cin>>e;
            sum+=e;
            if(e==0)
                zero++;

        }
        //cout<<zero;
        if((sum+zero)==0)
            cout<<(zero+1)<<"\n";
        else
            cout<<zero<<"\n";
    }
}
