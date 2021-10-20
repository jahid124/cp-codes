#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==b)
            cout<<"0\n";
        else if(a>b)
        {
            ll tem=a-b;
            if(tem%2==0)
                cout<<"1\n";
            else
                cout<<"2\n";
        }
        else
        {
            ll tem=b-a;
            if(tem%2==0)
                cout<<"2\n";
            else
                cout<<"1\n";
        }
    }
    return 0;
}
