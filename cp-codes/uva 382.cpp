#include<bits/stdc++.h>
using namespace std;
int dc(int a)
{
    int count=0;
    while(a != 0)
    {
        a /= 10;
        ++count;
    }
    return count;
}
int sum(int n)
{
    int i,c=1;
    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            if(i==n/i)
                c+=i;
            else
                c+=i+(n/i);
        }
    }
    if(n==1)
        return 0;
    else
        return c;
}
int main()
{
    int n,s,d,i;
    //freopen("401input.txt","r",stdin);
    cout<<"PERFECTION OUTPUT\n";
    cin>>n;
    while(n!=0)
    {
        s=sum(n);
        d=dc(n);
        if(s==n)
        {
            for(i=0; i<5-d; i++)
            {
                cout<<" ";
            }
            cout<<n<<"  PERFECT\n";
        }
        else if(s<n)
        {
            for(i=0; i<5-d; i++)
            {
                cout<<" ";
            }
            cout<<n<<"  DEFICIENT\n";
        }
        else
        {
            for(i=0; i<5-d; i++)
            {
                cout<<" ";
            }
            cout<<n<<"  ABUNDANT\n";
        }
        cin>>n;
    }
    cout<<"END OF OUTPUT\n";
}
