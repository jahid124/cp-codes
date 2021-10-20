#include<stdio.h>

int main()
{
    printf("Koyta number diben: ");

    int n;
    scanf("%d",&n);

    printf("Number gula de:\n");

    int num[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    for(int i=0; i<n-1; i++)
    {
        int small=num[i];
        int idx=i;
        for(int j=i; j<n; j++)
        {
            if(small>num[j])
            {
                small=num[j];
                idx=j;
            }
        }

        int tem;
        tem=num[i];
        num[i]=num[idx];
        num[idx]=tem;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",num[i]);
    }
}
