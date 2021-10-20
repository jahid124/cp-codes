#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        double a,b,c,r,lo,hi,md;
        cin>>a>>b>>c>>r;
        lo=0,hi=a;

        int cnt=1;
        r=(1/r)+1;
        while(lo<=hi)
        {
            if(++cnt>80) break;
            md=lo+(hi-lo)/2;
            if((a*a)/(md*md)>r) lo=md;
            else hi=md;
        }
        cout<<"Case "<<cs++<<": "<<setprecision(10)<<fixed<<md<<"\n";
    }
    return 0;
}
