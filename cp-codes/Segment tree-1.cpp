#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int sum(vector<int> &vc, int l,int r)
{
    if(l>=r) return vc[r];
    int m=(l+r)/2;
    return sum(vc,l,m)+sum(vc,m+1,r);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>vc;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            vc.push_back(a);
        }
        cout<<sum(vc,0,n-1)<<endl;
    }
}
