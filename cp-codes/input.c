#include<stdio.h>
#include<conio.h>


void main(void)
{
    int f=0,arr[50],n;
    //clrscr();
    printf("\n Enter pair of numbers (Enter a non integral value to terminate input):\n");
    while(scanf("%d",&n)==1)
    {
        arr[f]=n;
        f++;
    }
    //printf("\n The number of inputs are: %d",f-1);
    getch();
}
