#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n,l;
        cin>>n;
        vector<int> v(n);
        string a,b,c;
        cin>>b;

        l=-1;
        for(int i=0; i<n; i++)
        {
            if(b[i]=='0')
            {
                if(l!=1)
                {
                    v[i]=1;
                    l=1;
                }
                else {
                    v[i]=0;
                    l=0;
                }
            }
            else
            {
                if(l!=2)
                {
                    v[i]=2;
                    l=2;
                }
                else
                {
                    v[i]=1;
                    l=1;
                }
            }
        }

        for(int i=0; i<n; i++)
        {
            cout<<v[i]+48-b[i];
        }
        cout<<endl;

    }
    return 0;
}
