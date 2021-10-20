#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int rec(int n)
{
    if(!(n/10)) return n;
    int x=0;
    while(n)
    {
        x+=(n%10);
        n/=10;
    }
    return rec(x);
}

int main()
{
    int n;
    cin>>n;
    while(n)
    {
        cout<<rec(n)<<"\n";
        cin>>n;
    }
    return 0;
}
