#include<bits/stdc++.h>
using namespace std;
int ctoi(char c)
{
    return c-'0';
}



int main()
{
    string s;
    int fa[1000],in[30],suba[1000],ss,i,j,c=0,r=0;
    cin>>s;
    fa[0]=1;
    ss=s.size();
    //cout<<atoi(s);
    for(i=0;i<ss;i++)
    {
        in[i]=ctoi(s[i]);
    }
    fa[0]=1;
    /*for(i=0;i<ss;i++)
    {
        cout<<sa[i];
    }*/

    for(i=0;in[i]>0;i++)
    {
        r=0;
        for(j=0;fa[j]>0;j++)
        {

            if(fa[j]*in[i]+r>9)
            {
                suba[c]=(fa[j]*in[i]+r)%10;
                r=(fa[j]*in[i]+r)/10;
            }

        }
    }
    for(i=0;suba[i]>0;i++)
    {
        cout<<suba[i];
    }

}
