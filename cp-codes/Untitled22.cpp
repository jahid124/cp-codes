#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,f=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<n;i++)
        {
            if(abs(arr[0]-arr[i])%2==1)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}

