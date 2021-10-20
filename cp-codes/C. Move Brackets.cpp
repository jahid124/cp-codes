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
        string s;
        int n,cnt=0,res=0;
        cin>>n>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                cnt++;
            }
            else if(s[i]==')')
            {
                cnt--;
                if(cnt<0)
                {
                    res++;
                    cnt=0;
                }
            }
        }
        cout<<res<<'\n';
    }
    return 0;
}
