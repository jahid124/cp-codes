#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=0,a,b,c;
        cin>>n;
        for(int i=0; i<n;i++)
        {
            cin>>a>>b>>c;
            s=s+(a*c);
        }
        cout<<s<<endl;
    }
}

