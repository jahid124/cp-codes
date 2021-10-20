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

        vector<int>colx(3),colo(3);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(s[i][j]=='X')
                {
                    colx[(i+j)%3]++;
                }
                if(s[i][j]=='O')
                {
                    colo[(i+j)%3]++;
                }
            }
        }

        int fx,fo;
        int mini=colx[0]+colo[1];
        fx=0,fo=1;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                if(i==j) continue;
                if(colx[i]+colo[j]<mini)
                {
                    mini=colx[i]+colo[j];
                    fx=i,fo=j;
                }
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(s[i][j]=='X')
                {
                    if((i+j)%3==fx) s[i][j]='O';
                }
                if(s[i][j]=='O')
                {
                    if((i+j)%3==fo) s[i][j]='X';
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

