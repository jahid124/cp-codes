#include<stdio.h>
int main()
{
    char a[100] ;
    int count=0,n=0,i;
    while(gets(a))
    {
        int count=0,n=0,i;
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='u'||a[i]=='i'||a[i]=='A'||a[i]=='E'||a[i]=='O'||a[i]=='U'||a[i]=='I')
            {
                count++;
            }
            else if((a[i]>'a' && a[i]<='z') || (a[i]>'A' && a[i]<='Z'))
            {
                n++;
            }
        }
        printf("vowel=%d consonent=%d\n",count,n);
    }

}
