#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n=0;
    double d,u,v,t1,t2;
    cin>>t;
    while(t!=0)
    {
        n++;
        cin>>d>>u>>v;
        if(v<=u)
        {
            cout<<"Case "<<n<<": can't determine\n";
        }
        else
        {
            t1=(d/(sqrt(v*v-u*u)))-(d/v);
            if(t1<0)
            {
                cout<<"Case "<<n<<": can't determine\n";
            }
            else
                cout<<"Case "<<n<<": "<<fixed<<setprecision(3)<<t1<<"\n";
        }
        t--;
    }
}
