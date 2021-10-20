#include<bits/stdc++.h>
using namespace std;

/**
    Conditions:
            1) Don't use prime sign (') as variable
            2) Use single character as a variable
            3) Only capital letters are considered as terminal
               and other character as non-terminal
            4) I use below grammar as example:
               A => XTab
               D => aNXT
               Z => +A
               X => (X)T
               T => ZX

    Input:
        Enter number of grammar: 5

        Enter grammar 1 left side: A
        Enter grammar 1 right side: XTab

        Enter grammar 2 left side: D
        Enter grammar 2 right side: aNXT

        Enter grammar 3 left side: Z
        Enter grammar 3 right side: +A

        Enter grammar 4 left side: X
        Enter grammar 4 right side: (X)T

        Enter grammar 5 left side: T
        Enter grammar 5 right side: ZX

    Output:
        First(A)= {(}
        First(D)= {a}
        First(Z)= {+}
        First(X)= {(}
        First(T)= {+}

**/




map<char,string> mp;

char GenFirst(char s)
{
    char tem=mp[s][0];
    if(tem>='A' && tem<='Z')
    {
        GenFirst(tem);
    }

    else return tem;
}



int main()
{
    int n;
    string right;
    char left;
    vector<char>vc;
    map<char,char> res;
    cout<<"Enter number of grammar: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cout<<"\nEnter grammar "<<i<<" left side: ";
        cin>>left;
        cout<<"Enter grammar "<<i<<" right side: ";
        cin>>right;

        mp[left]=right;
        vc.push_back(left);
    }

    cout<<"\n\n";
    for(auto v: vc)
    {
        cout<<"First("<<v<<")= {"<<GenFirst(v)<<'}'<<endl;
    }
    cout<<"\n\n";
    return 0;
}
