#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b)
{
    return a<b;
}

char makeSmall(char a)
{
    if(a<97)
        return a+32;
    return a;
}
vector<string> makeWord(vector<char>ch)
{
    vector<string>names;
    string name;
    int s=ch.size(),f=1;
    for(int i=0; i<s; i++)
    {
        //cout<<"char= "<<ch[i]<<"\n";
        if(isalpha(ch[i]))
        {
            name+=makeSmall(ch[i]);

            f=0;
        }
        else
        {
            if(f==1)
            {
                continue;
            }
            else
            {
                //cout<<name<<" ";
                names.push_back(name);
                name.erase();
                f=1;
            }

        }
    }

    return names;
}
int main()
{
    //freopen("0input.txt","r",stdin);
    vector<char>input_ch;
    vector<string>names;
    char c;
    while(scanf("%c",&c)==1)  ///To take input character till EOF
        input_ch.push_back(c);

    names=makeWord(input_ch);  ///To make all valid word

    sort(names.begin(),names.end(),cmp);  ///To sort alphabetical order
    int s=names.size();
    string ss="..";
    for(int i=0; i<s; i++)
    {

        if(ss!=names[i])   ///To print distinct word
        {
            ss=names[i];
            cout<<names[i]<<"\n";
        }

    }


}

