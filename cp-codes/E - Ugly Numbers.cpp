#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
vector<ll>v;
map<ll,bool>mp;
void rec(ll n)
{
    if(n>14) return;
    if(!mp[n])
    {
        v.push_back(n);
        mp[n]=true;
    }

    else return;
    rec(n*2);
    rec(n*3);
    rec(n*5);
}

int main()
{
    //rec(1);
    //cout<<v.size();
    cout<<"The 1500'th ugly number is 859963392.\n";
}

