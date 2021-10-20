#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
    while(n--)
    {
        long long int x;
        cin>>x;
        x--;
        x=(x+x*x)/2;
        if(x%2==0)
            cout<<"Case "<<i<<": "<<x/2<<"\n";
        else
            cout<<"Case "<<i<<": "<<x<<"/2\n";
        i++;
    }
}
