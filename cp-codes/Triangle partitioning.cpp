#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    //fastio;
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        double a,b,c,r,s,ar,x,fr;
        //cin>>a>>b>>c>>r;
        scanf("%lf %lf %lf %lf",&a,&b,&c,&r);
        s=(a+b+c)/2.0;
        //cout<<s<<endl;
        ar=sqrt(s*(s-a)*(s-b)*(s-c))*(r/(r+1));
        //cout<<ar<<endl;
        x=(2*sqrt(ar))/(  pow( (a+b+c)*(a+b-c)*(a+c-b)*(b+c-a) , (1.0/4.0))  );
        //cout<<x<<endl;
        fr=a*x;
        //cout<<fr<<endl;
        printf("Case %d: %.7f\n",cs,fr);
        cs++;
    }
}
