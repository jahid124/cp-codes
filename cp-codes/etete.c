#include<stdio.h>
void main()
{
    int a,c,b;
    printf("pleaze inter a number\n");
    scanf("%d",&a);

   /* printf("please inter b number\n");
    scanf("%d",&b);

    if(a<b)
    {
        printf("number %d is bigger\n",b);
        printf("number %d is smaller\n",a);
    }

    else if(a==b)
    {
        printf("%d and %d is equal\n",a,b);
    }
    else if(a==b)
    {
        printf("%d and %d is equal\n",a,b);
    }

    else
    {
        printf("number %d is bigger\n",a);
        printf("number %d is smaller\n",b);
    }*/

    if(a<=32 && a>=0)
    {
        printf("FFFFFFFall to\n");

    }
    else if(a<=39 && a>=33)
    {
        printf("DDDDDD");

    }
    else if(a<=49 && a>=40)
    {
        printf("CCCC");
    }

    else if(a<60 && a>49)
    {
        printf("BBB");
    }
    else if(a<70 && a>59)
    {
        printf("A-");
    }
    else if(a<80 && a>69)
    {
        printf("AAA");
    }
    else if(a<101 && a>79)
    {
        printf("A+");

    }

    else
    {
        printf("pagla");
    }
}

