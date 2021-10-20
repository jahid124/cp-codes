#include<bits/stdc++.h>
using namespace std;

/**
    Input: finds arithmetic operator from +=,++=--//*><=<!!=?/*^==^!==<<==.
    Output: Arithmetic operators are: +, =, +, +, =, -, -, /, /, *, =, =, /, *, ^, =, =, ^, =, =, =, =
**/
/**
    consider +, -, =, /, ^, %, * as arithmetic operator
**/

int main()
{
    cout<<"Enter String: ";
    string s;
    //cin>>s;
    getline(cin,s);
    int sz=s.size(),f=1;
    cout<<"\nArithmetic operators are: ";
    for(int i=0; i<sz; i++)
    {
        if(s[i]=='+')
        {
            if(f)
            {
                cout<<s[i];
                f=0;
            }

            else
            {
                cout<<", "<<s[i];
            }
        }
        if(s[i]=='-')
        {
            if(f)
            {
                cout<<s[i];
                f=0;
            }

            else
            {
                cout<<", "<<s[i];
            }
        }
        if(s[i]=='*')
        {
            if(f)
            {
                cout<<s[i];
                f=0;
            }

            else
            {
                cout<<", "<<s[i];
            }
        }
        if(s[i]=='/')
        {
            if(f)
            {
                cout<<s[i];
                f=0;
            }

            else
            {
                cout<<", "<<s[i];
            }
        }
        if(s[i]=='^')
        {if(f)
            {
                cout<<s[i];
                f=0;
            }

            else
            {
                cout<<", "<<s[i];
            }
        }
        if(s[i]=='=')
        {
            if(f)
            {
                cout<<s[i];
                f=0;
            }

            else
            {
                cout<<", "<<s[i];
            }
        }
        if(s[i]=='%')
        {
            if(f)
            {
                cout<<s[i];
                f=0;
            }

            else
            {
                cout<<", "<<s[i];
            }
        }
    }
    if(f)
        cout<<"Not found any!";
    cout<<endl<<endl;
    return 0;
}

