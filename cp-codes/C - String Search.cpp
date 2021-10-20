#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    string a,b;
    cin>>a>>b;
    int s=b.size(),n=a.size();
    for(int i=0;i<n;i++)
    {
        //cout<<a.substr(i,b.size())<<"\n";
        if(a.substr(i,s)==b)
            cout<<i<<"\n";
    }
    return 0;
}
