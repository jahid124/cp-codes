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
        string s;
        cin>>s;
        map<char,int> cnt;
        for(int i=0; i<s.size(); i++)
        {
            cnt[s[i]]++;
        }
        int v=max({cnt['A'],cnt['E'],cnt['I'],cnt['O'],cnt['U']});
        int c=0,vc=0,cc=0;
        for(int i='A'; i<='Z'; i++)
        {
            if(i=='A' || i=='E' || i=='I' || i=='O' || i=='U') continue;
            c=max(c,cnt[i]);
        }
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') vc+=2;
            else vc++;
        }
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') cc+=1;
            else cc+=2;
        }
        cout<<"Case #"<<cs++<<": "<<min(vc-2*v,cc-2*c)<<endl;
        //cout<<vc<<" "<<cc<<endl;
    }
    return 0;
}

