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
        int n,cnt=0,f=0;
        cin>>n;
        while(true)
        {
            if(n==1)
            {
                break;
            }
            if(n%6==0)
            {
                n/=6;
                cnt++;
            }

            else if(n%3==0)
            {
                n=n/3;
                cnt=cnt+2;
            }
            else

            {
                f=1;
                break;
            }

        }
        if(f)
            cout<<"-1\n";
        else cout<<cnt<<"\n";
    }
    return 0;
}
