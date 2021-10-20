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
        cin>>s;

        int k=s.size(),f=0,in=0;
        int n=s[k-1]-'0';
        for(int i=0; i<k; i++)
        {

            if(s[i]=='.')
            {
                in=1;
                if(!i)
                    n=0;
                else
                    n=s[i-1]-'0';
                in=1;
                for(int j=i+1; j<k; j++)
                {
                    if(s[j]!='0')
                    {
                        f=1;

                        break;
                    }
                }
            }
            if(in)
                break;
        }
        if(!f && in && n%2) cout<<"N0\n";
        else if(f) cout<<"N0\n";
        else if(n%2)
            cout<<"N0\n";
        else
            cout<<"YES\n";
    }
}
