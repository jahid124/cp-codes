#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    ///freopen("0output.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll l=0,r=n/2,m,a,b;
        bool f=0;
        int cnt=1;
        while(l<=r)
        {
            if(cnt++>100) break;
            m=l+(r-l)/2;
            a=sqrt(m);
            b=sqrt(n-m);
            if(a*a+b*b==n)
            {
                f=1;
                break;
            }
            if(a*a+b*b>n) r=m-1;
            else l=m+1;
        }
        f? cout<<"YES\n":cout<<"NO\n";
    }
}
