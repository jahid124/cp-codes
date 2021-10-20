#include<bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<ceil(2.1);
    int n,one=0,two=0,ans;
    cin>>n;
    bool a[n+5],b[n+5],f=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            f=1;
            if(a[i])
                one++;
            else
                two++;
        }
    }
    if(f==0 || one==0)
        cout<<"-1\n";
    else
    {
        if(one>two)
            cout<<"1\n";
        else
        {
            //cout<<one<<" "<<two<<"\n";
            ans=ceil((two+1)*1.0/one);
            cout<<ans<<"\n";
        }

    }

}
