#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        int g;
        scanf("%d",&g);

        for(int j=1; j<=g; j++)
        {
            int i,n,q,ans;
            scanf("%d %d %d",&i,&n,&q);

            if(n%2==0)
            {
                ans=n/2;
            }
            else
            {
                if(i==1)
                {
                    if(q==1)
                    {
                        ans=(n-1)/2;
                    }
                    else
                    {
                        ans=(n+1)/2;
                    }
                }
                else
                {
                    if(q==1)
                    {
                        ans=(n+1)/2;
                    }
                    if(q==2)
                    {
                        ans=(n-1)/2;
                    }

                }
            }

            printf("%d\n",ans);
        }
    }




}
