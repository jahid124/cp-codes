#include<stdio.h>
int main()
{
    int a,b,i=0,j;
    int ar[100];
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        //printf("%d",b);
        ar[i]=b;
        i++;
    }

        for(j=0;j<i;j++)
        {
            printf("%d ",ar[j]);
        }


}
