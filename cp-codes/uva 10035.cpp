#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    int c,r1,r2,f;
    freopen("0input.txt","r",stdin);
    cin>>a>>b;
    while(!(a==0 && b==0))
    {
        c=0,f=0;
        while(a!=0 || b!=0)
        {
            r1=a%10;
            a/=10;
            r2=b%10;
            b/=10;
            if((r1+r2+f)>9)
            {
                c++;
                f=1;
                continue;
            }
            f=0;

        }
        if(c==0)
            cout<<"No carry operation.\n";
        else if(c==1)
            cout<<"1 carry operation.\n";
        else
            cout<<c<<" carry operations.\n";
        cin>>a>>b;
    }
}
