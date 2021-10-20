#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int m;
bool exist(int a[], int p)
{
    for(int i=0;i<m;i++)
    {
        if(a[i]==p)
            return 1;
    }
    return 0;
}




int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n>>m;

        int a[n],p[m],flag=0,pos[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            pos[i]=a[i];
        }

        for(int i=0;i<m;i++)
            cin>>p[i];


        //setpos(a);

        sort(p,p+m);
        sort(pos,pos+n);

        for(int i=0;i<n;i++)
        {
            //cout<<!exist(p,i+1)<<endl;
            if(!exist(p,i+1))
            {
                for(int j=0;j<=i;j++)
                {
                    if(pos[i]<a[j])
                    {
                        flag=1;
                        break;
                    }
                }
            }

            if(flag==1)
                break;
        }

        if (flag==1)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
}
