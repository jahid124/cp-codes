#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    int a,b;
    cin>>a>>b;
    while(a || b)
    {
        unordered_set<int>s;
        for(int i=0;i<a;i++)
        {
            int n;
            cin>>n;
            s.insert(n);
        }
        int sz=s.size(),cnt=0;
        for(int i=0;i<b;i++)
        {
            int n;
            cin>>n;
            s.insert(n);
            if(sz==s.size()) cnt++;
            else sz++;
        }

        cout<<cnt<<"\n";
        cin>>a>>b;
    }
}
