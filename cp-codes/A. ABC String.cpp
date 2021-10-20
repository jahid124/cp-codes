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

        int n=s.size();

        vector<int> v(3,0);

        for(int i=0; i<n; i++)
        {
            if(s[i]=='A')
                v[0]++;
            else if(s[i]=='B')
                v[1]++;
            else
                v[2]++;
        }

        if(v[0]+v[1]==v[2])
        {
            if(s[0]=='A' or s[0]=='B')
            {
                int cnt=0;

                for(int i=0; i<n; i++)
                {
                    if(cnt<0)
                    {
                        cout<<"NO\n";
                        break;
                    }

                    if(s[i]=='A' or s[i]=='B')
                        cnt++;
                    else
                        cnt--;
                }

                if(cnt==0)
                    cout<<"YES\n";
            }

            else
            {
                int cnt=0;

                for(int i=0; i<n; i++)
                {
                    if(cnt<0)
                    {
                        cout<<"NO\n";
                        break;
                    }

                    if(s[i]=='A' or s[i]=='B')
                        cnt--;
                    else
                        cnt++;
                }

                if(cnt==0)
                    cout<<"YES\n";
            }
        }

        else if(v[0]+v[2]==v[1])
        {
            if(s[0]=='A' or s[0]=='C')
            {
                int cnt=0;

                for(int i=0; i<n; i++)
                {
                    if(cnt<0)
                    {
                        cout<<"NO\n";
                        break;
                    }

                    if(s[i]=='A' or s[i]=='C')
                        cnt++;
                    else
                        cnt--;
                }

                if(cnt==0)
                    cout<<"YES\n";
            }

            else
            {
                int cnt=0;

                for(int i=0; i<n; i++)
                {
                    if(cnt<0)
                    {
                        cout<<"NO\n";
                        break;
                    }

                    if(s[i]=='A' or s[i]=='C')
                        cnt--;
                    else
                        cnt++;
                }

                if(cnt==0)
                    cout<<"YES\n";
            }
        }

        else if(v[2]+v[1]==v[0])
        {
            if(s[0]=='C' or s[0]=='B')
            {
                int cnt=0;

                for(int i=0; i<n; i++)
                {
                    if(cnt<0)
                    {
                        cout<<"NO\n";
                        break;
                    }

                    if(s[i]=='C' or s[i]=='B')
                        cnt++;
                    else
                        cnt--;
                }

                if(cnt==0)
                    cout<<"YES\n";
            }

            else
            {
                int cnt=0;

                for(int i=0; i<n; i++)
                {
                    if(cnt<0)
                    {
                        cout<<"NO\n";
                        break;
                    }

                    if(s[i]=='C' or s[i]=='B')
                        cnt--;
                    else
                        cnt++;
                }

                if(cnt==0)
                    cout<<"YES\n";

            }
        }

        else
            cout<<"NO\n";

    }
    return 0;
}
