#include<stdio.h>
int main()
{
    int a[100],n,b,i,x,y,f=0;
    printf("Enter the no of element: ");

    scanf("%d",&n);
    printf("Enter %d number consecutively\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=1;i<n-1;i++)
    {
        if(a[i]>=a[i-1] && a[i]>=a[i+1])
        {

            f++;
        }
        if(x!=f)
        {
            printf("%d ",a[i]);
        }
        x=f;
    }
    printf("is a pick number\n");
}
