#include<bits/stdc++.h>
using namespace std;
bool checkname(char name[])
{
    int size=strlen(name);
    for(int i=0; i<size; i++)
    {
        if(!((name[i]>='a' && name[i]<='z') || (name[i]>='A' && name[i]<='Z')))
        {
            //cout<<"yyy ";
            return 0;
        }

    }
    //cout<<"aaaaa ";
    return 1;
}

int main()
{
    //printf("%d",'9');
    FILE *fp;
    fp=fopen("raihan.txt","w");
    char n1[100],n2[100];


    cout<<"Enter first name: ";
lev1:
    gets(n1);
    if(!checkname(n1))
    {
        system("cls");
        cout<<"You wrong !!!\nEnter first name: ";
        goto lev1;
    }
    else
    {
        system("cls");
        cout<<"Enter first name: "<<n1<<"\n";
    }

    cout<<"Enter last name: ";
lev2:
    gets(n2);
    if(!checkname(n2))
    {
        system("cls");

        cout<<"First name: "<<n1<<"\nYou wrong !!!"<<"\nEnter last name: ";
        goto lev2;
    }
    else
    {
        system("cls");
        cout<<"First name: "<<n1<<"\nEnter last name: "<<n2<<"\n\n";
    }


    getchar();


    return 0;
}
