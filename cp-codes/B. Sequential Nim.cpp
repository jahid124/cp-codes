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
            cin >> a;
            v.pb(a);
        }
        int i;
        for(i=0; i<v.size(); i++)
        {
            if(v[i]!=1)
            {
                break;
            }
        }
        if(i==v.size())
        {
            if(n%2==0) cout<<"Second\n";
            else cout<<"First\n";
        }
        else
        {
            if(i%2==1) cout<<"Second\n";
            else cout<<"First\n";
        }
    }
    return 0;
}
