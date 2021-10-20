#include<bits/stdc++.h>
using namespace std;
int mod(int a, int b, int c)
{
    int x;
    if(b==0)
    {
        return 1%c;
    }
    else if(b==1)
    {
        return a%c;
    }
    if((b&1)==1)
    {
        return ((mod(a,b-1,c)%c)*a)%c;
    }
    else
        int x;
        x=mod(a,b/2,c)%c;
        x*=x;
        return x%c;
}
int main()
{
    int a,b,c,x;
    while(cin>>a>>b>>c)
    {
        x=mod(a,b,c);
        cout<<x<<endl;
    }

}
