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

        for(int i=0;i<s.size()-1;i+=2)
        {
            cout<<s[i];
        }
        cout<<s[s.size()-1]<<"\n";
    }
}
