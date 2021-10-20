#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    fastio;
    map<string,int>mp;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a==0)
        {
            string s;
            ll b;
            cin>>s>>b;
            mp[s]=b;

        }
        else if(a==1)
        {
            string s;

            cin>>s;
            cout<<mp[s]<<"\n";

        }
        else{string s;
        cin>>s; mp.erase(s);}

    }
    return 0;
}


