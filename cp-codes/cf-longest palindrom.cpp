#include<bits/stdc++.h>
using namespace std;
bool arr[105];
bool check(string s)
{
    string a;
    a=s;
    reverse(s.begin(),s.end());
    if(a==s)
        return 1;
    return 0;
}
int main()
{
    //freopen("0input.txt","r",stdin);
    memset(arr,0,sizeof(arr));
    int num,len;
    string fnl="",mid="";
    scanf("%d %d",&num,&len);

    vector<string>str;
    for(int i=0; i<num; i++)
    {
        string tem;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin>>tem;
        str.push_back(tem);
    }

    for(int i=0; i<num; i++)
    {
        if(arr[i]==1)
            continue;
        int f=check(str[i]),flag=0;
        for(int j=i+1; j<num; j++)
        {
            string t=str[j];
            reverse(t.begin(),t.end());
            if(str[i]==t && arr[j]==0)
            {
                flag=1;
                arr[j]=arr[i]=1;
                fnl+=str[i];
                break;
            }
        }
        if(f==1 && flag==0)
            mid=str[i];
    }
    string tem1=fnl;
    int sz=fnl.size();
    sz*=2;
    sz+=mid.size();
    reverse(tem1.begin(),tem1.end());
    cout<<sz<<"\n"<<fnl<<mid<<tem1<<"\n";
    return 0;
}
