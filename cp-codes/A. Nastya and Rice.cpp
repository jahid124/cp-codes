#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,d,fstl,fsth,scndl,scndh;
        cin>>n>>a>>b>>c>>d;
        fstl=(a-b)*n;
        fsth=(a+b)*n;
        scndh=c+d;
        scndl=c-d;
        if((fsth<scndl && fstl<scndl )|| (fsth>scndh && fstl>scndh)) cout<<"NO\n";
        else cout<<"YES\n";

    }
}
