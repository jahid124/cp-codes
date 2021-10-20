#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    while(cin>>n>>c)
    {
        int a[170],k=-1,f=0;

        if(n>0)
        {
            k=0;
            a[0]=1;
        }
        if(n>1)
        {
            k=1;
            a[1]=2;
        }
        if(n>2)
        {
            k=2;
            a[2]=3;
        }
        if(n>3)
        {
            for(int i=5; i<=n; i++)
            {
                int f=0;
                for(int j=2; j*j<=i; j++)
                {
                    if(i%j==0)
                    {
                        f=1;
                        break;
                    }
                }
                if(f==0)
                {
                    k++;
                    a[k]=i;
                }
            }
        }
        if((2*c)>(k+1))
        {
            cout<<n<<" "<<c<<":";
            for(int i=0; i<=k; i++)
            {
                cout<<" "<<a[i];
            }
            cout<<endl<<endl;
        }

        else if((k+1)%2==0)
        {
            k/=2;
            cout<<n<<" "<<c<<":";
            for(int i=k-c+1; i<=k+c; i++)
            {
                cout<<" "<<a[i];
            }
            cout<<endl<<endl;
        }
        else
        {
            k/=2;
            cout<<n<<" "<<c<<":";
            for(int i=k-c+1; i<=k+c-1; i++)
            {
                cout<<" "<<a[i];
            }
            cout<<endl<<endl;
        }
    }
}
