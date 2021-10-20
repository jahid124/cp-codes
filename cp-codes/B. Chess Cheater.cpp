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
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE
struct pr
{

    int idx,val;

};
int n;
bool cmp(pr a,pr b)
{
    if(a.idx==0 || a.idx==n-1) return false;
    if(b.idx==0 || b.idx==n-1) return true;
    return a.val<b.val;
}
int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>n>>k;
        string s;
        cin>>s;
        pr p;
        vector<pr>vc;
        int cnt=0,cn=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='L') cn++;
        }
        if(cn<=k)
        {
            cout<<2*n-1<<"\n";continue;
        }
        for(int i=0; i<n; i++)
        {

            if(s[i]=='W')
            {
                if(cnt!=0)
                {
                    p.idx=i-1;
                    p.val=cnt;
                    vc.push_back(p);
                }
                cnt=0;
            }
            else
                cnt++;
            if(i==n-1)
            {
                if(cnt!=0)
                {
                    p.idx=i;
                    p.val=cnt;
                    vc.push_back(p);
                }
            }
        }

        sort(vc.begin(),vc.end(),cmp);
        //for(int i=0; i<vc.size(); i++) cout<<vc[i].idx<<" "<<vc[i].val<<endl;
        int i=0;
        for(int x=0; x<vc.size(); x++)
        {
            if(k==0)
                break;
            int ind=vc[x].idx,v=vc[x].val;
            //cout<<"gggggggg";

            if(ind-v>=0 and s[ind-v]=='W')
            {
                int indx=ind-v+1;
                for(int j=0; j<v; j++)
                {
                    if(s[indx]=='W' or k==0)
                        break;
                    else
                    {
                        s[indx]='W';
                        ++indx;
                        --k;
                    }
                }
            }

            else
            {
                for(int j=0; j<v; j++)
                {
                    if(s[ind]=='W' or k==0)
                        break;
                    else
                    {
                        s[ind]='W';
                        --ind;
                        --k;
                    }
                }
            }

        }
        int ans=0,f=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='W')
            {
                if(f==0)
                {
                    f=1;
                    ans+=1;
                }
                else
                    ans+=2;
            }
            else
            {
                f=0;
            }
        }

        cout<<ans<<"\n";
    }
    return 0;
}
