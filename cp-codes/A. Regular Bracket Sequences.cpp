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
    int t=1,cs=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        string s;
        for(int i=0; i<2*n; i++)
        {
            if(i%2==0) s+='(';
            else s+=')';
        }
        cout<<s<<endl;
        for(int i=1; i<2*n-1; i+=2)
        {
            swap(s[i],s[i+1]);
            cout<<s<<endl;
        }
    }
    return 0;
}

