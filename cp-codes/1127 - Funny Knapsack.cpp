#include<bits/stdc++.h>
using namespace std;
#define lli long long int
vector<lli>sum;
int arr[35];
lli sum1(vector<lli>vec)
{
    lli sum=0;
    int s=vec.size();
    for(int i=0;i<s;i++)
        sum+=vec[i];
    return sum;
}
void print(vector<int>vec)
{
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
}
void sumOfSubset(int idx, vector<lli>vec,int size)
{
    if(idx==size)
    {
        sum.push_back(sum1(vec));
        return;
    }
    sumOfSubset(idx+1,vec,size);
    vec.push_back(arr[idx]);
    sumOfSubset(idx+1,vec,size);
}
int main()
{
    //freopen("0input.txt","r",stdin);
    int t,i=1;
    scanf("%d",&t);
    while(i<=t)
    {
        lli n,w;
        lli cnt=0;
        vector<lli>vec,sum1,sum2;
        scanf("%lld %lld",&n,&w);
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        sumOfSubset(0,vec,n/2);
        sum1=sum;
        sum.clear();
        vec.clear();
        sumOfSubset(n/2,vec,n);
        sum2=sum;

        sort(sum2.begin(),sum2.end());
        for(int i=0;i<sum1.size();i++)
        {
            cnt+=(upper_bound(sum2.begin(),sum2.end(),w-sum1[i])-sum2.begin());
        }
        printf("Case %d: %lld\n",i,cnt);
        i++;
        sum.clear();
        sum1.clear();
        sum2.clear();
        vec.clear();
    }
    return 0;
}
