#include<stdio.h>
int main()
{
    int a[100],i,j,s,m,e,v,n,b;
    printf("Enter the no of value: ");
    scanf("%d",&n);
    printf("Enter %d valu consecutivelt\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    b=0;
    e=n-1;
    m=(n-1)/2;
    printf("Enter the value you want to search: ");
    scanf("%d",&v);
    while(b<=e)
    {
        if(a[m]==v)
        {
            printf("Value is found and index is %d",m);
            break;
        }
        else if(a[m]>v)
        {
            m=(b+m-1)/2;
        }
        else if(a[m]<v)
        {
            m=(e+m+1)/2;
        }
    }
    if(b==e)
    {
        printf("Value not found\n");
    }

}
