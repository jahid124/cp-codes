#include<bits/stdc++.h>
using namespace std;
int gcd(int i, int j)
{
    while(j%i!=0)
    {
        int t;
        t=j;
        j=i;
        i=t%i;
    }
    return i;
}
int main()
{
    int x=100,y;
    while(cin>>y && x!=0 && y!=0)
    {
        int s=0;
        for(int i=1;i<y;i++)
        {
            for(int j=i+1;j<=y;j++)
            {
                s+=gcd(i,j);
            }
        }
        cout<<s<<endl;
        x--;
    }

}
