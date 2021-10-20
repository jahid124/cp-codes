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

int query(int a, int b)
{
    cout<<"? "<<a<<" "<<b<<endl;
    int n;
    cin>>n;
    return n;
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n+1,0);
    int l=1,r=n;
    while(l<r)
    {
        int a=query(l,r);
        int b=query(r,l);
        if(a>b)
        {
            arr[l]=a;
            ++l;
        }
        else
        {
            arr[r]=b;
            --r;
        }
    }
    if(arr[l]==0) arr[l]=n;
    if(arr[r]==0) arr[r]=n;
    cout<<"! ";
    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
