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

int sum(ll num)
{
    int val=0;
    while(num!=0)
    {
        val+=(num%10);
        num/=10;
    }
    return val;
}

int main()
{
    string s;
    int n;
    cin>>s>>n;

    ll num=0;
    for(int i=0; i<s.size(); i++)
    {
        num+=(s[i]-'0');
    }

    num*=n;

    while(num/10!=0)
    {
        num=sum(num);
    }

    cout<<num<<"\n";
}
