#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
ll mul(vector<int>&v)
{
    ll a=1;
    for(int i=0; i<10; i++)
        a*=v[i];
    return a;
}
int main()
{

    ll k;
    int i=0;
    cin>>k;
    vector<int>v(10,1);
    string s="codeforces";
    while(true)
    {
        if(mul(v)>=k)
            break;
        v[i]++;
        i++;
        if(i==10)
            i=0;
    }
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<v[i]; j++)
        {
            cout<<s[i];
        }
    }
    cout<<"\n";

    return 0;
}
