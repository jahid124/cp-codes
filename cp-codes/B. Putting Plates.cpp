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
        int n,m;
        cin>>n>>m;

        bool arr[20][20];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                arr[i][j]=0;
        }

        for(int i=0; i<n; i++)
        {
            if(i==0 || i==n-1)
            {
                for(int j=0; j<m; j++)
                    if(j%2==0)
                        arr[i][j]=1;
            }
        }
        for(int i=2; i<n-2; i++)
        {
            if(arr[i-1][0]==0)
                arr[i][0]=1;
        }
        for(int i=2; i<n-2; i++)
        {
            if(arr[i-1][m-1]==0)
                arr[i][m-1]=1;
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                cout<<arr[i][j];
            cout<<endl;
        }

    }
    return 0;
}

