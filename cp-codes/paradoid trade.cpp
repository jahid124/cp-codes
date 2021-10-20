#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,p=0,lastp=0,profit,buy,f=0,a[1000];
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=0; i<n; i++)
        {
            if(f==0)
            {

                if(a[i]<a[i+1])
                {
                    buy=a[i];
                    //cout<<"position buy: "<<buy;
                    f=1;
                }
            }
            else
            {
                if(i==n-1)
                {
                    profit=a[i]-buy;
                    //cout<<"profit p : "<<profit;
                    if(profit>=lastp)
                    {

                        p=p+profit;
                        //cout<<"p1= "<<p;
                    }
                }
                else
                {
                    if(a[i]>a[i+1])
                    {
                        //cout<<"enter in loop ";
                        profit=a[i]-buy;
                        if(profit>=lastp)
                        {

                            p=p+profit;
                            lastp=profit;
                            //cout<<profit<<lastp<<p;
                            f=0;
                        }

                    }
                }

            }
        }
        cout<<p<<endl;
        p=0;
    }
}
