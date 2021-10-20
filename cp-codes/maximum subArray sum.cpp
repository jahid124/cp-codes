#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    freopen("0input.txt","r",stdin);
    int t,best=0,sum=0;
    vector<int>v;
    cin>>t;
    int arr[t];
    for(int i=0; i<t; i++)
        cin>>arr[i];
    for(int i=0; i<t; i++)
    {
        if(arr[i]==0)
        {

        }
        else if(arr[i]<0)
        {
            if(sum==0)
                continue;
            else
            {
                v.pb(sum);
                sum=0;
                v.pb(arr[i]);
            }

        }
        else
            sum+=arr[i];
    }
    sum=0;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        sum=max(v[i],sum+v[i]);
        best=max(best, sum);
    }
    cout<<endl<<best;
}
