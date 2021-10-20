#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,row,col,f=0;
        cin>>n>>m;
        row=n;
        col=m;
        vector<int > v[55];
        vector<int > x,y;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int a;
                cin>>a;
                v[i].pb(a);
                if(a)

                    f=1;
            }
            if(f)
            {
                row--;
                f=0;
            }
        }

        for(int i=0; i<m; i++)
        {

            f=0;
            for(int j=0; j<n; j++)
            {
                if(v[j][i])
                {
                    f=1;
                    break;
                }
            }
            if(f)
            {
                col--;
                f=0;
            }
        }

        int x=min(row,col);
        if(x%2==0)
            cout<<"Vivek\n";
        else
            cout<<"Ashish\n";
    }
}
