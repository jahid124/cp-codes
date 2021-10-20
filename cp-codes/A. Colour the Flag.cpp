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
        int n,m,a,f=0;
        cin>>n>>m;
        char c;

        vector<string>vc(n);

        for(int i=0; i<n; i++)
        {
            cin>>vc[i];
        }


        int sm=-1;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(vc[i][j]=='W' || vc[i][j]=='R')
                {
                    c=vc[i][j];
                    sm=i+j;
                    break;
                }
            }
            if(sm!=-1)
                break;
        }

        if(sm==-1)
        {
            cout<<"YES\n";
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    if((i+j)%2==0)
                    {
                        cout<<'W';
                    }
                    else
                        cout<<'R';
                }
                cout<<endl;
            }
        }
        else if(sm%2==1)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    if((i+j)%2==1 && vc[i][j]!=c && vc[i][j]!='.')
                    {
                        f=1;
                        break;
                    }
                    else if((i+j)%2==0 && vc[i][j]==c && vc[i][j]!='.')
                    {
                        f=1;
                        break;
                    }
                    else if((i+j)%2==1)
                    {
                        if(c=='W')
                            vc[i][j]='W';
                        else
                            vc[i][j]='R';
                    }
                    else if((i+j)%2==0)
                    {
                        if(c=='W')
                            vc[i][j]='R';
                        else
                            vc[i][j]='W';
                    }
                }
            }
            if(f==1)
            {
                cout<<"No\n";
            }
            else
            {
                cout<<"YES\n";
                for(int i=0; i<n; i++)
                {
                    cout<<vc[i];
                    cout<<endl;
                }
            }

        }
        else
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    if((i+j)%2==0 && vc[i][j]!=c && vc[i][j]!='.')
                    {
                        f=1;
                        break;
                    }
                    else if((i+j)%2==1 && vc[i][j]==c && vc[i][j]!='.')
                    {
                        f=1;
                        break;
                    }
                    else if((i+j)%2==0)
                    {
                        if(c=='W')
                            vc[i][j]='W';
                        else
                            vc[i][j]='R';
                    }
                    else if((i+j)%2==1)
                    {
                        if(c=='W')
                            vc[i][j]='R';
                        else
                            vc[i][j]='W';
                    }
                }
            }
            if(f==1)
            {
                cout<<"No\n";
            }
            else
            {
                cout<<"YES\n";
                for(int i=0; i<n; i++)
                {
                    cout<<vc[i];
                    cout<<endl;
                }
            }

        }
    }
    return 0;
}

