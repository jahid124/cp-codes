#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int a,b,k,x;
        cin>>a>>b>>k;

        map<int,int> ma,mb;

        for(int i=0; i<k; i++)
        {
            cin>>x;
            ma[x]++;
        }

        for(int i=0; i<k; i++)
        {
            cin>>x;
            mb[x]++;
        }
        ll n=((k-1)*k)/2;

        for(int i=1; i<=a; i++)
        {
            if(ma[i]>1)
            {
                n-=(((ma[i]-1)*ma[i])/2);
            }
        }

        for(int i=1; i<=b; i++)
        {
            if(mb[i]>1)
            {
                n-=(((mb[i]-1)*mb[i])/2);
            }
        }


        cout<<n<<endl;

    }
    return 0;
}
