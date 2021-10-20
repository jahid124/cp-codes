#include<bits/stdc++.h>
using namespace std;
int main()
{

    int number[50],i,n,sum=0`;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>number[i];
    }

    int k=1;
     for(i=0; i<n; i++,k++)
     {
         sum=sum+number[i];


     }

     cout<<sum;




}
