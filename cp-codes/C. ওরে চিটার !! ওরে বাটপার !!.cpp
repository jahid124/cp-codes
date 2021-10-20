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

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,tem;
        int i=0,sum=0;
        cin>>n;
        tem=n;
        if(n==0)
        {
            cout<<"0\n";
            continue;
        }
        while(tem!=0)
        {
            sum+=(tem%10);
            tem=tem/10;
            i++;
        }

        if(sum==(9*i) or sum==(9*(i-1))+(n/(pow(10,i-1))))
        {
            cout<<sum<<"\n";
            continue;
        }

        //if(sum==())

    }
}
