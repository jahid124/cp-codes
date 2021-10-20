#include<stdio.h>
int main()
{
    int n,d,t,k;
    float f;
    scanf("%d %d",&n,&d);
    t=d*2+1;
    f=((float) n)/t;
    k=f;
    if(k<f)
    {
        k++;
    }
    printf("%d",k);
}
