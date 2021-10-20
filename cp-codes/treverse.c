#include<stdio.h>>
int main()
{
    getch();
    char ch[100],b[100];
    printf("enter your string: ");
      gets(ch);
      int x,k,i;
      x=strlen(ch);
      k=x-1;
      for(i=0;ch[i]!='\0';i++)
      {
         b[i]=ch[k];
         k--;
      }
      b[i]='\0';
      printf("%s",b);

}
