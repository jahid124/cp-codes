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

struct pr{

    int val,idx;

};

bool cmp(pr a, pr b)
{
    return a.val<b.val;
}

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<pr> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i].val;
            v[i].idx=i+1;
        }

        sort(v.begin(), v.end(), cmp);

        //for(int i=0; i<n; i++) cout<<v[i].val<<"\n";;

        ll sum=0;
        vector<int> ans;
        for(int i=0; i<n-1; i++)
        {
            sum+=v[i].val;

            if(sum < v[i+1].val)
            {
                ans.clear();

            }
            else
            {
                ans.pb(v[i].idx);
            }
        }

        ans.pb(v[n-1].idx);

        sort(ans.begin(), ans.end());

        cout<<ans.size()<<endl;

        for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
        cout<<endl;

    }
    return 0;
}
