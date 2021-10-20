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
        int n,x,y,sz,dif,tem;
        cin>>n>>x>>y;
        for(int i=1;i<50;i++)
        {
            int cnt=0,xf=0,j;
            for(j=y;j>0;j-=i)
            {
                if(j==x) xf=1;
                cnt++;
                if(cnt==n) break;
            }
            if(xf)
            {
                if(cnt!=n) j+=i;
                cnt=0;
                while(cnt!=n)
                {
                    cout<<j<<" ";
                    j+=i;
                    cnt++;
                }
                cout<<"\n";
                break;
            }
        }
    }
    return 0;
}
