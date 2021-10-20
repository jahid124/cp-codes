#include<stdio.h>
int main()
{
    int i,j,a,b,c,s,x,y;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        x=a;
        y=b;
        s=0;
        if(a>b)
        {
            int tem=a;
            a=b;
            b=tem;
        }
        for(i=a; i<=b ; i++)
        {
            j=i;
            c=0;
            while(j>1)
            {
                if(j%2==0)
                {
                    j=j/2;
                }
                else
                {
                    j=3*j+1;
                }

                c++;
            }
            if(c>s)
            {
                s=c;
            }

        }
        printf("%d %d %d\n",x,y,s+1);
    }

}
