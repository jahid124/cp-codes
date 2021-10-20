#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define flw freopen ("0output.txt","w",stdout)
#define flr freopen ("0input.txt","r",stdin)
#define no1s(x) __builtin_popcount(x)
#define parity(x) __builtin_parity(x)
#define leadingZeros(x) __builtin_clz(x)
#define trailingZeros(x) __builtin_ctz(x)
///mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE

int arr[1000];

vector<int> v;

void make(int s, int l, int lv)
{
    if(s>l) return;
    int mx=0,m;
    for(int i=s; i<=l; i++)
    {
        if(v[i]>mx)
        {
            m=i;
            mx=v[i];
        }
    }

    arr[m]=lv;
    make(s,m-1,lv+1);
    make(m+1,l,lv+1);
}

int main()
{
    int t,cs=1,a;
    cin>>t;
    while(t--)
    {
        v.clear();
        int n;
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }

        make(0,n-1,0);

        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
