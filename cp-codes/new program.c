#include<stdio.h>
#include<conio.h>

void main(  )
{

    int num1,num2,res;
    char c;
    float f;
    double d;


    printf("Enter a number: ");

    scanf("%d",&num1);
    /*//scanf("%d",&num2);

    res=num1+num2;*/



    printf("Enter a float number: ");
    scanf("%f",&f);
    printf("Enter a double number: ");
    scanf("%ld",&d);
    printf("Enter a character: ");
    scanf("%c",&c);

    printf("This is int number: %d",num1);
    printf("This is character: %c",c);
    printf("This is float number: %f",f);
    printf("This is doublle number: %ld",d);

}
