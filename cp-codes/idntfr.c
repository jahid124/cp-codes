#include<stdio.h>
#include<string.h>

char keywrd[40][10]={{"auto"},{"double"},{"int"},{"struct"}
,{"break"},{"else"},{"long"},{"switch"}
,{"case"},{"enum"},{"register"},{"typedef"}
,{"char"},{"extern"},{"short"},{"unsigned"},{"return"},{"union"}
,{"continue"},{"for"},{"signed"},{"void"}
,{"do"},{"if"},{"static"},{"while"}
,{"default"},{"goto"},{"sizeof"},{"volatile"}
,{"const"},{"float"}};

int isKeyword(char s[])
{
    for(int i=0; i<32; i++)
    {
        if(strcmp(keywrd[i],s)==0) return 1;
    }
    return 0;
}

int main()
{
    printf("Enter a string: ");
    char str[1000],tem[1000];
    //scanf("%s",str);
    gets(str);
    int sz=strlen(str);

    printf("\n\nIdentifiers are:");
    for(int i=0; i<sz; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || str[i]=='_')
        {
            memset(tem,0,sizeof(tem));
            int pos=0;
            while(i<sz && (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || str[i]=='_')
            {
                tem[pos++]=str[i];
                i++;
            }
            if(isKeyword(tem)) continue;
            else printf("  %s",tem);
        }
    }

    printf("\n\n");

    return 0;
}
