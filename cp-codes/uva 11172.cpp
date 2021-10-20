#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
        {
            cout<<">\n";
        }
        else if(a<b)
        {
            cout<<"<\n";
        }
        else
            cout<<"=\n";
    }
}
