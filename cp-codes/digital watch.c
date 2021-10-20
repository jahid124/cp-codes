#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<ctype.h>
COORD coord={0,0};
 void gotoxy(int x,int y)
 {
   coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
int main()
{
    system("cls");
    int s=0,m=0,h=0,i,j;
    printf("Set the time(H:M:S): ");
    scanf("%d %d %d",&h,&m,&s);
    if(h>=24 || m>=60 || s>=60)
    {
        printf("Invalid time! Try again after 4sec.");
        Sleep(4000);
        main();
    }
    while(1)
    {
        Sleep(934);
        s++;
        if(s==60)
        {
            s=0;
            m++;
        }
        if(m==60)
        {
            m=0;
            h++;
        }
        if(h==24)
        {
            h=0;
        }
        system("cls");
        //gotoxy(10,5);
        printf("%d:%d:%d\n",h,m,s);
    }

}
