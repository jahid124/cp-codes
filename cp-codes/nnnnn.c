#include<stdio.h>
main()
{
    int d,g,h,l,k;
    //printf("Enter first & second number separate by space: ");
    scanf("%d%d%d",&d,&g,&l);
    //printf("Enter second number: ");
    //scanf("%f",&g);
    h=d%g;
    k=h*l;
    printf("Sum=%d",k);
}
