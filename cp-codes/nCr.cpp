#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,r;
    double x=1,y=1;
    while(cin>>n>>r)
    {
        double x=1;
        for(i=0;i<r;i++)
        {
            x=(x*(n-i))/(r-i);
            //y=y*(s-i);

        }
        cout<<x<<endl;
    }
}
