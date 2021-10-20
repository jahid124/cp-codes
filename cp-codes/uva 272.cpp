#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f=1,c=0;
    string s;
    freopen("272.txt","r",stdin);
    while(getline(cin,s))
    {
        c=s.size();
        for(int i=0;i<c;i++)
        {
            if(f==1 && s[i]=='\"')
            {
                cout<<"``";
                f=0;
            }

            else if(f==0 && s[i]=='\"')
            {
                cout<<"''";
                f=1;
            }

            else
                cout<<s[i];
        }
        cout<<"\n";
    }
}

