#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll sum(int n)
{
    return (n*(n+1))/2;
}
int main()
{
    ll n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        arr[i]=a;
    }

    ll consum[n],conday[n];

    conday[0]=arr[0];
    consum[0]=sum(arr[0]);
    for(int i=1; i<n; i++)
    {
        conday[i]=conday[i-1]+arr[i];
        consum[i]=consum[i-1]+sum(arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"  "<<conday[i]<<"  "<<consum[i]<<"\n";
    }
}
