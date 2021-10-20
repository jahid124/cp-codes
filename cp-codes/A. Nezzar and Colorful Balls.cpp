#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
///mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n,a,mx=0;
        cin>>n;
        map<int,int> mp;

        for(int i=0; i<n; i++)
        {
            cin>>a;
            mp[a]++;
        }

        for(int i=1; i<=n; i++)
        {
            mx=max(mx,mp[i]);
        }

        cout<<mx<<endl;
    }
    return 0;
}
