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

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s[n+2];

        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }
        char a,b,c,d;
        a=s[0][1];
        b=s[1][0];
        c=s[n-2][n-1];
        d=s[n-1][n-2];

        if(a=='0' and b=='0' and c=='0' and d=='0')
        {
            cout<<"2\n"<<"1 2\n2 1\n";
            continue;
        }
        if(a=='0' and b=='0' and c=='0' and d=='1')
        {
            cout<<"1\n"<<n-1<<" "<<n<<"\n";
            continue;
        }
        if(a=='0' and b=='0' and c=='1' and d=='0')
        {
            cout<<"1\n"<<n<<" "<<n-1<<"\n";
            continue;;
        }
        if(a=='0' and b=='0' and c=='1' and d=='1')
        {
            cout<<"0\n";
        }
        if(a=='0' and b=='1' and c=='0' and d=='0')
        {
            cout<<"1\n"<<"1 2"<<"\n";
            continue;
        }
        if(a=='0' and b=='1' and c=='0' and d=='1')
        {
            cout<<"2\n2 1\n"<<n-1<<" "<<n<<"\n";
            continue;
        }
        if(a=='0' and b=='1' and c=='1' and d=='0')
        {
            cout<<"2\n2 1\n"<<n<<" "<<n-1<<"\n";
            continue;
        }
        if(a=='0' and b=='1' and c=='1' and d=='1')
        {
            cout<<"1\n2 1\n";
            continue;
        }
        if(a=='1' and b=='0' and c=='0' and d=='0')
        {
            cout<<"1\n2 1\n";
            continue;
        }
        if(a=='1' and b=='0' and c=='0' and d=='1')
        {
            cout<<"2\n2 1\n"<<n<<" "<<n-1<<"\n";
            continue;
        }
        if(a=='1' and b=='0' and c=='1' and d=='0')
        {
            cout<<"2\n2 1\n"<<n-1<<" "<<n<<"\n";
            continue;
        }
        if(a=='1' and b=='0' and c=='1' and d=='1')
        {
            cout<<"1\n1 2\n";
            continue;
        }
        if(a=='1' and b=='1' and c=='0' and d=='0')
        {
            cout<<"0\n";
            continue;
        }
        if(a=='1' and b=='1' and c=='0' and d=='1')
        {
            cout<<"1\n"<<n<<" "<<n-1<<"\n";
            continue;
        }
        if(a=='1' and b=='1' and c=='1' and d=='0')
        {
            cout<<"1\n"<<n-1<<" "<<n<<"\n";
            continue;
        }
        if(a=='1' and b=='1' and c=='1' and d=='1')
        {
            cout<<"2\n2 1\n1 2\n";
            continue;
        }
    }
    return 0;
}
