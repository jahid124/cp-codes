#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC

int main()
{
    int t=1,T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n],ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            ans=ans ^arr[i];
        }
        cout<<"Case "<<t<<": "<<ans<<"\n";
        t++;
    }
}
