#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t,tc=1;
    cin>>t;
    while(t--)
    {
        //freopen("0output","w",stdout);
        int m,n;
        cin>>m>>n;
        if(m==1 || n==1)
        {
            m>n?cout<<"Case "<<tc<<": "<<m<<"\n":cout<<"Case "<<tc<<": "<<n<<"\n";
        }
        else if(m*n<=4)
            cout<<"Case "<<tc<<": "<<m*n<<"\n";
        else if(m*n==6)
            cout<<"Case "<<tc<<": "<<"4\n";
        else if((m==2 || n==2) && m*n>8)
            cout<<"Case "<<tc<<": "<<ceil(1.0*(m*n)/2)+1<<"\n";
        else
            cout<<"Case "<<tc<<": "<<ceil(1.0*(m*n)/2)<<"\n";
        tc++;
    }
}
