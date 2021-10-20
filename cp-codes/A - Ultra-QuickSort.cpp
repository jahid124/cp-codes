
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
ll inv_cnt;
void make_merge(vector<int>&vc, int l, int r)
{
    int m=(l+r)/2;
    int s1=m-l+1, s2=r-m ,i=l, j=m+1;
    vector<int> left,right;
    for(int z=0; z<s1;z++)
    {
        left.push_back(vc[i++]);
    }
    for(int z=0; z<s2;z++)
    {
        right.push_back(vc[j++]);
    }

    i=0, j=0;

    int k=l,tem=s1;


    while(s1 && s2)
    {
        if(left[i]<=right[j])
        {
            vc[k]=left[i];
            s1--;
            i++;
            k++;
        }
        else
        {
            vc[k]=right[j];
            s2--;
            j++;
            k++;
            inv_cnt+=(tem-i);
        }
    }
    while(s1)
    {
        vc[k]=left[i];
        s1--;
        k++;
        i++;
    }
    while(s2)
    {
        vc[k]=right[j];
        j++;
        k++;
        s2--;
    }
}

void merge_sort(vector<int> &vc, int l, int r)
{
    if(l>=r) return;
    int m=(l+r)/2;
    merge_sort(vc,l,m);
    merge_sort(vc,m+1,r);
    make_merge(vc,l,r);
}

int main()
{
    int n;
    cin>>n;
    while(n)
    {
        inv_cnt=0;
        vector<int>vc;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            vc.pb(a);
        }

        merge_sort(vc,0,n-1);

        cout<<inv_cnt<<"\n";
        cin>>n;
    }
}

