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
        int n,k;
        cin>>n;
        k=ceil((n*1.0)/4);
        for(int i=0; i<n-k; i++)
        {
            cout<<"9";
        }
        for(int i=0; i<k; i++)
        {
            cout<<"8";
        }
        cout<<"\n";
    }
    return 0;
}
