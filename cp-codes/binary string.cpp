#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{

    int k;
    cin>>k;
    string s;
    cin>>s;
    vector<int>arr;
    arr.resize(s.size(),0);

    //cout<<arr.size();

    if(s[0]=='1')
        arr[0]=1;
    else
        arr[0]=0;


    for(int i=1; i<s.size(); i++)
    {
        if(s[i]=='1')
            arr[i]=arr[i-1]+1;
        else
            arr[i]=arr[i-1];
    }

    ll ans=0;
    //cout<<(int)s.size()-k+1<<"\n";
    for(int i=0 ; i < ((int)s.size()-k+1) ; i++)
    {
        if(i>=s.size())
            break;
        if(s[i]=='1')
        {
            auto lb=lower_bound(arr.begin()+i,arr.end(),arr[i]+k-1);
            auto ub=upper_bound(arr.begin()+i,arr.end(),arr[i]+k-1);
            ans+=(ub-lb); ///cout<<"for i= "<<i<<", val= "<<ub-lb<<endl;
        }

        else
        {
            auto lb=lower_bound(arr.begin()+i,arr.end(),arr[i]+k);
            auto ub=upper_bound(arr.begin()+i,arr.end(),arr[i]+k);
            ans+=(ub-lb);
            ///cout<<"for i= "<<i<<", val= "<<ub-lb<<endl;
        }
    }
    cout<<ans<<"\n";

}
