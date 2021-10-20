#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool fun(int m, int arr[],int n,int sz)
{
    int con_size=0, con=1;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>m) return 0;
        if(con_size+arr[i]<=m) con_size+=arr[i];
        else
        {
            con++;
            con_size=arr[i];
        }
    }

    return con<=sz;
}

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n+5];
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }

        int left=1,right=sum,mid,cnt=1;
        while(left<=right)
        {
            if(cnt>60) break; cnt++;

            mid=left+(right-left)/2;

            if(fun(mid,arr,n,m)) right=mid;
            else left=mid+1;
        }
        cout<<"Case "<<cs<<": "<<mid<<"\n"; cs++;
    }
    return 0;
}
