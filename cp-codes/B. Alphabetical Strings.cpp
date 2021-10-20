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
        string s;
        cin>>s;
        int sz=s.size(),pos=-1,ff=0;
        for(int i=0; i<sz; i++)
        {
            if(s[i]=='a')
            {
                ff=1;
                pos=i;
                break;
            }
        }
        if(pos==-1)
        {
            cout<<"No\n";
            continue;
        }
        //cout<<pos<<endl;
        int l=pos-1,r=pos+1,f=0,t=1;
        while(l>-1 || r<sz)
        {
            if(l<=-1)
            {
                if(s[r]-'a'!=t)
                {
                    f=1;
                    //cout<<"cccc";
                    break;
                }
                else r++,t++;
            }
            else if(r>=sz)
            {
                if(s[l]-'a'!=t)
                {
                    f=1;
                    break;
                }
                else l--,t++;
            }
            else if(s[r]-'a'==t) r++,t++;
            else if(s[l]-'a'==t) l--,t++;
            else
            {
                f=1;
                break;
            }
        }
        if(f) cout<<"NO\n";
        else cout<<"YEs\n";
    }
    return 0;
}

