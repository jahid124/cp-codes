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
        int n;
        cin>>n;
        string s[n+1];

        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }

        vector<int>col(3);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(s[i][j]=='X')
                {
                    col[(i+j)%3]++;
                }
            }
        }

        int f;
        if(col[0]<=col[1] and col[0]<=col[2]) f=0;
        if(col[1]<=col[0] and col[1]<=col[2]) f=1;
        if(col[2]<=col[1] and col[2]<=col[0]) f=2;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(s[i][j]=='X')
                {
                    if((i+j)%3==f) s[i][j]='O';
                }
            }
        }

        for(int i=0; i<n; i++)
        {
            cout<<s[i]<<endl;
        }
    }
    return 0;
}
