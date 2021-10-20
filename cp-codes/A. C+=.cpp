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

        int a,b,n,i=0;
        cin>>a>>b>>n;
        if(a>b)
            swap(a,b);
        for(i=0;i<1000000;i++)
        {
            if(a>n || b>n)
                break;
            if(i%2==0)
            {
                a+=b;
            }
            else
                b+=a;


        }
        cout<<i<<"\n";
    }
    return 0;
}
