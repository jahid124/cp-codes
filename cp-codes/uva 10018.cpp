#include<bits/stdc++.h>
using namespace std;

unsigned long int rev(unsigned long int n)
{
    unsigned long int a=0;
    while(n!=0)
    {
        int rem=n%10;
        a=a*10+rem;
        n/=10;
    }
    return a;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int pal_count=0;
        unsigned long int a,b=-1;
        cin>>a;
        while(a!=b)
        {
            b=rev(a);
            //cout<<b<<" ";
            if(a==b)
                break;
            a+=b;
            pal_count++;
        }
        cout<<pal_count<<" "<<a<<endl;
    }
}
