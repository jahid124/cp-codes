#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        set<int>con;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            con.insert(x);
        }
        cout<<con.size()<<"\n";
    }
}
