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
vector<ll>cd;
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void commDiv(ll a, ll b)
{
    ll n = gcd(a, b);


    for (ll i = 1; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                cd.pb(i);
            else{
                cd.pb(i);
                cd.pb(n/i);
            }
        }
    }
}

int main()
{
    ll a,b;
    cin>>a>>b;
    commDiv(a,b);
    for(int i=0; i<cd.size(); i++) cout<<cd[i]<<" ";
    cout<<cd.size();
}
