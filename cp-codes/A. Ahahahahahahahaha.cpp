#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define flw freopen ("0output.txt","w",stdout)
#define flr freopen ("0input.txt","r",stdin)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// MUST ADD

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l=0,r=0;
        cin>>n;
        int arr[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                if(arr[i]==1)
                    l++;
            }
            else
            {
                if(arr[i]==1)
                    r++;
            }
        }

        if(l==r)
        {
            cout<<n<<"\n";
            for(int i=0; i<n; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
        else if(l<r)
        {
            int sz=r-l;
        }
    }
}
