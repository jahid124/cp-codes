#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define flw freopen ("0output.txt","w",stdout)
#define flr freopen ("0input.txt","r",stdin)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// MUST ADD

ll power(int a,int b)
{
    ll tem=1;
    for(int i=0; i<b; i++)
    {
        tem=tem*a;
    }
    return tem;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,p=1;
        cin>>n;
        int cnt=0;
        while(1)
        {
            ll tem=power(2,p)-1;
            //cout<<tem<<endl;
            p++;
            tem=((tem+1)*tem)/2;
            if(n>=tem)
            {
                cnt++;
                n-=tem;
            }
            else break;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
