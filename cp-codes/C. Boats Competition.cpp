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
        int n;
        cin>>n;
        vector<int>v;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.pb(x);
        }
        int ans=0;
        vector<bool>mark(n+5);

        for(int i=0; i<n+2; i++) mark[i]=0;

        for(int i=2; i<=2*n; i++)
        {
            int cnt=0;
            for(int j=0; j<n-1; j++)
            {
                if(mark[j]) continue;


                for(int k=j+1; k<n; k++)
                {
                    if(mark[k]) continue;

                    if(v[j]+v[k]==i)
                    {

                        cnt++;
                        mark[j]=mark[k]=true;
                        break;
                    }
                }


            }
            ans=max(ans,cnt);
            for(int i=0; i<n+2; i++) mark[i]=0;
        }

        cout<<ans<<"\n";
    }
    return 0;
}
