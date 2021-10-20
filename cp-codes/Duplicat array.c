#include<stdio.h>
int main()
{
    int a[100],i,j,n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=i;
        while(a[i]==a[k+1])
        {
            for(j=i;j<n;j++)
            {
                a[j]=a[j+1];
            }
            n--;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
