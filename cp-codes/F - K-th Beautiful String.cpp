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
        int n,k,i;
        cin>>n>>k;
        ll num=1;
        string s="a";
        while(s.size()<n)
            s+=s;
        for(i=1;i<=n-s.size();i++)
            s+="a";
        cout<<s<<endl;

        //num=(mid*(mid-1))/2+1;
        //i=mid;
        s[n-i-1]='b';
        s[n-k+num-1]='b';
        cout<<s<<"\n";
    }
}
