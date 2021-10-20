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
            int a;
            cin>>a;
            v.pb(a);
        }
        int inc=1,i;
        for(i=n-1; i>0; i--)
        {
            if(v[i]<=v[i-1] && inc==1)
                continue;
            if(v[i]>v[i-1])
            {
                inc=0;

            }

            if(v[i]<v[i-1])
                break;



        }
        cout<<i<<"\n";
    }
    return 0;
}
