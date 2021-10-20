#include<stdio.h>
int main()
{
    double x;
    int i,j,k,l,m,n,o,a,b,c,d,e,f;
    scanf("%lf",&x);
    printf("NOTAS:\n");
    for(i=1; x>=100; i++)
    {
        x=x-100.00;
    }
    printf("%d nota(s) de R$ 100.00\n",i-1);
    for(j=1; x>=50; j++)
    {
        x=x-50;
    }
    printf("%d nota(s) de R$ 50.00\n",j-1);
    for(k=1; x>=20; k++)
    {
        x=x-20;
    }
    printf("%d nota(s) de R$ 20.00\n",k-1);
    for(l=1; x>=10; l++)
    {
        x=x-10;
    }
    printf("%d nota(s) de R$ 10.00\n",l-1);
    for(m=1; x>=5; m++)
    {
        x=x-5;
    }
    printf("%d nota(s) de R$ 5.00\n",m-1);
    for(o=1; x>=2; o++)
    {
        x=x-2;
    }
    printf("%d nota(s) de R$ 2.00\n",o-1);
    printf("MEDAS:\n");
    //for coints
    for(a=1; x>=1; a++)
    {
        x=x-1;
    }
    printf("%d moeda(s) de R$ 1.00\n",a-1);
    for(b=1; x>=0.50; b++)
    {
        x=x-0.50;
    }
    printf("%d moeda(s) de R$ 0.50\n",b-1);
    for(c=1; x>=0.25; c++)
    {
        x=x-0.25;
    }
    printf("%d moeda(s) de R$ 0.25\n",c-1);
    for(d=1; x>=0.10; d++)
    {
        x=x-0.10;
    }
    printf("%d moeda(s) de R$ 0.10\n",d-1);
    for(e=1; x>=0.05; e++)
    {
        x=x-0.05;
    }
    printf("%d moeda(s) de R$ 0.05\n",e-1);
    for(f=1; x>=0.009; f++)
    {
        x=x-0.01;
    }
    printf("%d moeda(s) de R$ 0.01\n",f-1);
    //printf("%lf",x);
    return 0;
}
