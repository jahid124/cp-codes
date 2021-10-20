#include<stdio.h>
int main()
{
    char ch,a[100],mn;
    printf("enter your string: ");
    gets(a);
    //scanf("%c",&ch);
    int i,count=0;
    for(mn='a';mn<='z';mn++)
    {
        for(i=0;a[i]!='\0';i++)
        {
            if(mn==a[i])
            {
                count++;
            }


        }
        if(count!=0)
        printf("%c==%d\n",mn,count);
        count=0;

    }



}
