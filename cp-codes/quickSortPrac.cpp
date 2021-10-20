#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// MUST ADD

int Partition(vector<int>&vc,int s,int l)
{
    int pivot=vc[l];
    int i=s-1;
    for(int j=s; j<l; j++)
    {
        if(vc[j]<pivot)
        {
            i++;
            swap(vc[i],vc[j]);
        }
    }
    i++;
    swap(vc[i],vc[l]);
    return i;
}

int quickSort(vector<int>&vc,int i, int j,int k)
{
    if(i<=j)
    {
        int x=Partition(vc,i,j);
        if(j-x+1==k) return vc[x];
        else if(j-x+1>k) return quickSort(vc,x+1,j,k);
        return quickSort(vc,i,x-1,k-j+x-1);
    }


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>vc(n);
        for(int i=0; i<n; i++)
            cin>>vc[i];
        shuffle(vc.begin(), vc.end(), rng);
        cout<<quickSort(vc,0,n-1,k)<<endl;

    }
}
