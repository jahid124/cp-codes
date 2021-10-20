#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define fi freopen("0input.txt","r",stdin)
#define fflush cin.ignore()

int main()
{
    int t=1,T;
    cin>>T;
    while(T--)
    {
        int n,mini,maxi=0;
        cin>>n;
        set<int>s;
        map<int,int>m;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            int x,y;
            x=s.size();
            s.insert(a);
            y=s.size();
            if(x==y) m[a]++;
            else{m[a]=1; v.pb(a);}
        }
        for(int i=0;i<v.size();i++)
        {
            if(maxi<m[v[i]]) maxi=m[v[i]];
        }
        mini=s.size()-1;
        if(mini+1<maxi) mini++;
        int res=min(min(mini,n/2),maxi);
        cout<<res<<"\n";

    }
}
