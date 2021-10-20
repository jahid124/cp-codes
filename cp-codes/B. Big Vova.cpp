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

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,lcm;
        cin>>n;
        vector<int>vc,ans,lc;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            vc.push_back(a);
        }
        sort(vc.begin(),vc.end(),greater<int>());
        lcm=vc[0];
        ans.push_back(vc[0]);
        vc.erase(vc.begin());
        lc.push_back(lcm);
        while(!vc.empty())
        {
            int tem=0,pos;
            for(int i=0; i<vc.size(); i++)
            {
                int g= __gcd(lcm,vc[i]);
                if(tem<g)
                {
                    tem=g;
                    pos=i;
                }

            }
            lcm=tem;
            //lc.push_back(lcm);
            ans.push_back(vc[pos]);
            vc.erase(vc.begin()+pos);
        }

        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
