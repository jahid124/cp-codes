#include<bits/stdc++.h>
using namespace std;
int make(char a)
{
    return a-48;
}

int a=100,b=100;

bool fun(char arr[],int s)
{
    a=100,b=100;
    for(int i=0;i<s;i++)
    {
        if(make(arr[i])%2==1 &&a==100)
        {
            a=make(arr[i]);
            continue;
        }

        if(a<100 && make(arr[i])%2==1)
        {
            b=make(arr[i]);
            break;
        }

    }
    cout<<a<<" "<<b<<"\n";
    if(a<100 && b<100)
        return 1;
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char arr[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(fun(arr,n))
            cout<<a<<b<<"\n";
        else
            cout<<"-1\n";
    }



    return 0;
}
