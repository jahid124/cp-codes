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
        int a0,a1,a2,b0,b1,b2,a,b,c;
        cin>>a0>>a1>>a2>>b0>>b1>>b2;
        c=max(0,b2-a0);

        if(c==0)
            cout<<min(a2,b1)*2<<"\n";
        else
        {
            int x=a2-c;
            if(x>0)
                cout<<min(x,b1)*2<<"\n";
            else if(x==0)
                cout<<"0\n";
            else
                cout<<(a2-c)*2<<"\n";
        }

    }
    return 0;
}
