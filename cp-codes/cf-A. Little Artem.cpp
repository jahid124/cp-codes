#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC

int main()
{
    int t=1,T;
    cin>>T;
    while(T--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=1;i<=n*m;i++)
        {
            if(i==1)
            {
                cout<<'W';
            }
            else
                cout<<'B';
            if(i%m==0)
                cout<<"\n";
        }
    }
}
