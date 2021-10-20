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

int sumDigit(ll num)
{
    int n=0;
    while(num!=0)
    {
        n+=(num%10);
        num/=10;
    }
    return n;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll num,tem,cnt=0,mul=1;
        int eq,sum;
        cin>>num>>eq;
        tem=num;
        while(tem!=0)
        {
            tem/=10;
            sum=sumDigit(num);
            if(sum<=eq)
                break;
            //cout<<num%10<<endl;
            cnt+=((10-((num%10)==0?10:(num%10)))*mul);
            //cout<<cnt<<" ";
            mul*=10;
            (num%10)==0?num/=10:num=(num/10)+1;
        }
        cout<<cnt<<endl;
    }
}
