#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char n[20];
    scanf("%s",&n);
    strcat(n,".txt");
    FILE *fp;
    //fgets(n, 64, stdin);
    fp = fopen(n,"w");
    if(fp!=NULL)
        printf("ok");
    else
        printf("...");
    return 0;
}
