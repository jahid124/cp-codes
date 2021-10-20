#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n||j==i||j+i==n+1||i==n/2||j==n/2||i==n/4||j==n/4||i==(3*n)/4||j==(3*n)/4)
            {
                printf("*");
            }
            else
                printf("@");


        }
        printf("\n");
    }
}
