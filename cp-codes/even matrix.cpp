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
        int n;
        cin>>n;
        if(n%2==1)
        {
            for(int i=1;i<=n*n;i++)
            {
                cout<<i;
                if(i%n==0) cout<<"\n";
                else cout<<" ";
            }
        }
        else{

            int f=1,l=n*n,fl=1;
            while(f<l)
            {
                if(fl){
                    for(int i=f; i<f+n; i++)
                    {
                        cout<<i<<" ";
                    }
                    cout<<"\n";
                    f=f+n;
                    fl=0;
                }
                else{

                    for(int j=l;j>l-n;j--)
                    {
                        cout<<j<<" ";
                    }
                    cout<<"\n";
                    l=l-n;
                    fl=1;
                }

            }

        }
    }
}
