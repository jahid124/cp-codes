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
        string s;
        int k,n,one=-1000000000;

        cin>>n>>k;
        cin.ignore();
        cin>>s;
        int arr[n+5];
        int a=0,f=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                a++;


            }
            arr[i]=a;
        }
        if(a==0)
        {
            cout<<ceil(n*1.0/(k+1))<<"\n";

                continue;
        }

        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                one=i;
                i=i+k;

                continue;
            }

            else
            {
                if(i==0)
                {
                    if(i+k<n && arr[i+k]-arr[i]==0)
                    {
                        cnt++;
                        one=i;
                        i=i+k;

                    }
                }
                if(i==n-1)
                {
                    if(n-1-k>=0 && arr[n-1]-arr[n-1-k]==0 && one<n-1-k)
                    {
                        cnt++;
                        i=i+k;
                    }
                }
                else
                {
                    if(i-k>one && i-k>=0 && i+k<n && arr[i+k]-arr[i-k]==0  )
                    {
                        cnt++;
                        one=i;
                        i=i+k;

                    }

                }

            }
        }


        if(f==0)
            cout<<cnt<<"\n";

    }
}
