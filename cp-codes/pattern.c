#include<stdio.h>
int main()
{
    int a,b,n,i,j=1;
    scanf("%d",&n);
    a=1;
    while(a!=n+1)
    {
        for(i=1;i<=a;i++)
        {
            printf("%d ",j);
            j++;
        }
        a++;
        printf("\n");
    }
}
