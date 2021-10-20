
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a,b,c,x,i;
    while(cin>>a>>b>>c)
    {
        //x=mod(a,b,c);
        unsigned long long int d=a;
        for(i=1;i<b;i++)
        {
            a*=d;
        }
        cout<<a<<endl;
    }

}
