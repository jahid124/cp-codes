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

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n,m,f=0,target,getTarget=0,in;
        cin>>n>>m;
        vector<int>row(m),col(n),res(n);
        unordered_map<int,vector<int>>mp;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>row[j];
                if(f==0)
                {
                    f=1;
                    target=row[j];
                }
            }
            mp[row[0]]=row;
        }
        ///cout<<target<<endl;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>col[j];

                if(col[j]==target)
                {
                    ///cout<<i<<" "<<j<<endl;
                    getTarget=1;
                    f=0;
                }

            }
            if(getTarget and !f)
            {
                ///cout<<i<<endl;
                res=col;f=1;
            }
        }
        ///for(int i:res) cout<<i<<" "; cout<<endl;

        for(int val: res)
        {
            for(auto ans: mp[val])
            {
                cout<<ans<<" ";
            }
            cout<<"\n";
        }


    }
    return 0;
}
