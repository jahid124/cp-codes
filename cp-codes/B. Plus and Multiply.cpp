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
#define mx 100005
///mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE
int a,b;
set<int>s;
map<int,bool>mp;
void rec(int n)
{
    if(n>1000 || mp[n]) return;
    //cout<<n<<" ";
    s.insert(n);
    mp[n]=1;
    rec(n*a);
    rec(n+b);
}

int main()
{
    //set<int>s;
    a=100,b=5;
    rec(1);
    for(auto  it = s.begin(); it!=s.end(); ++it){
    int ans = *it;
    cout << ans << endl;
 }
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int>vc(n);

        for(int i=0; i<n; i++) cin>>vc[i];

        for(int i=0; i<n; i++)
        {

        }
    }
    return 0;
}

