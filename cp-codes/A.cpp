#include<bits/stdc++.h>
using namespace std;
vector<int> divisor[100];
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j+=i)
        {
            divisor[j].push_back(i);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j+=i)
        {
            if(divisor[j][i]>0)
            cout<<divisor[j][i]<<" ";
        }
        cout<<endl;
    }
}
