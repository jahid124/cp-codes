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
        int d;
        cin>>d;
        if(d==0)
        {
            cout<<"Y 0 0\n";
            continue;
        }
        if(d<4)
        {
            cout<<"N\n";
            continue;
        }
        if(d==4)
        {
            cout<<"Y 2 2\n";
            continue;
        }
        cout<<"Y ";
        double a,b,l=0,r=d*1.0,mid;
        mid=l+(r-l)/2;
        int cnt=1;
        while(l<r)
        {
            ///cout<<cnt<<" ";
            cnt++;
            if(cnt>100)
                break;
            a=mid=l+(r-l)/2;
            b=(d*1.0)-a;
            if(a*b>a+b)
                r=mid;
            else
                l=mid;
            ///cout<<l<<" "<<r<<"\n";
            //getchar();
        }
        cout<<setprecision(10)<<fixed<<a<<" "<<b<<"\n";
    }
}
