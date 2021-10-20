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
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
                a++;
            else b++;
        }
        int f=0;
        if(n%2==0)
        {
            if(a!=b)
            {
                cout<<"-1\n";
                f=1;
            }
        }
        else{
            if(a-1!=b)
            {
                cout<<"-1\n";
                f=1;
            }
        }
        a=0;
        b=0;
        if(f==0)
        {
            for(int i=0; i<n; i++)
            {
                if(i%2==0)
                {
                    if(arr[i]%2==0)
                        a++;
                }
                else
                {
                    if(arr[i]%2==1)
                        b++;
                }

            }
            cout<<min(ceil((n*1.0)/2)-a,(n*1.0/2)-b )<<"\n";
        }


    }
}
