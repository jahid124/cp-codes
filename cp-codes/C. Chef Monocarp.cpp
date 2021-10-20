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
        int n,cnt,tem,avl=0,ans=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.begin(),v.end());
        //for(int xx: v) cout<<xx<<" ";
        for(int i=0; i<n; i++)
        {
            int p=i;
            cnt=0;
            tem=v[i];
            while(p<n and v[p]==tem)
            {
                //cout<<"here= "<<v[p]<<endl;
                p++;
                cnt++;
            }
            int num=max(v[i]-cnt/2,avl+1);
            cout<<" "<<num<<endl;
            int x=i;
            i=i+(cnt-1);
            cout<<"cnt= "<<cnt<<endl;
            while(cnt--)
            {
                ans+=(abs(v[x++]-num));
            }
            avl=num;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
