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
        int n,cnt=0;
        string s;
        cin>>n>>s;
        char ans[n][n];
        for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    ans[i][j]='1';
                }
                //cout<<endl;
            }
        vector<int> in;

        for(int i=0; i<n; i++)
        {
            ans[i][i]='X';
            if(s[i]=='2')
            {
                in.pb(i);
            }
        }
        if(in.size()==0)
        {
            cout<<"YES\n";
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(i==j) cout<<'X';
                    else cout<<'=';
                }
                cout<<endl;
            }
        }
        else if(in.size()<3) cout<<"NO\n";
        else
        {
            for(int i=0; i<in.size(); i++)
            {
                if(i==in.size()-1)
                {
                    ans[in[i]][in[0]]='+';
                    ans[in[0]][in[i]]='-';
                }
                else
                {
                    ans[in[i]][in[i+1]]='+';
                    ans[in[i+1]][in[i]]='-';
                }

            }
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(ans[i][j]=='1') ans[i][j]='=';
                }
            }
            cout<<"YES\n";
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    cout<<ans[i][j];
                }
                cout<<endl;
            }
        }

    }
    return 0;
}

