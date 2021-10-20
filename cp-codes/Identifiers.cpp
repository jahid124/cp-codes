#include<bits/stdc++.h>
using namespace std;

/**
    Input: int name,age,salary.. void sum(int a, int b) return 0;
    Output: Identifiers are: name age salary sum a b
**/

vector<string>identifiers;
vector<string>keywords{"auto",	"double","int","struct",
"break",	"else",	"long",	"switch",
"case",	"enum",	"register",	"typedef",
"char",	"extern",	"return",	"union",
"continue",	"for",	"signed",	"void",
"do",	"if",	"static",	"while",
"default",	"goto",	"sizeof",	"volatile",
"const",	"float",	"short",	"unsigned"};

bool isKeyword(string s)
{
    for(string keywrd: keywords)
    {
        if(keywrd==s) return 1;
    }
    return 0;
}

int main()
{

    cout<<"Enter String: ";
    string s;
    identifiers.clear();
    getline(cin,s);
    int sz=s.size();
    for(int i=0; i<sz; i++)
    {
        if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z') or s[i]=='_')
        {
            string tem;
            while(i<sz and (s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z') or s[i]=='_')
            {
                tem+=s[i];
                i++;
            }
            if(isKeyword(tem)) continue;
            else identifiers.push_back(tem);
        }
    }

    if(!identifiers.size()) cout<<"\n\nSorry!! Not found any Identifiers!\n\n";
    else
    {
        cout<<"\n\nIdentifiers are: ";
        for(string s: identifiers) cout<<s<<" ";
        cout<<endl<<endl;
    }

    return 0;
}
