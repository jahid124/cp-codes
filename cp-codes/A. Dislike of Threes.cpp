#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pii pair<int,int>
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define flw freopen ("0output.txt","w",stdout)
#define flr freopen ("0input.txt","r",stdin)
#define no1s(x) __builtin_popcount(x)
#define parity(x) __builtin_parity(x)
#define leadingZeros(x) __builtin_clz(x)
#define trailingZeros(x) __builtin_ctz(x)
#define mx 100005
#define inf 1000000005
///mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE

int main()
{
    vector<int>num;
    int n=1;
    while(num.size()<1002)
    {
        if(n%3==0 || n%10==3)
        {
            n++;
            continue;
        }
        else num.pb(n++);
    }
    int t=1,cs=1;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        cout<<num[k-1]<<endl;
    }
    return 0;
}

