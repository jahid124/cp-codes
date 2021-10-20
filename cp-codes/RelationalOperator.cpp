#include<bits/stdc++.h>
using namespace std;

/**
    Input: finds relational operators from -=,++=--//*><=<!!=?/*^==^!==<<==.
    Relational operators are: >, <=, <, !=, ==, !=, <, <=
**/

int main()
{
    cout<<"Enter String: ";
    string s;
    //cin>>s;
    getline(cin,s);
    int sz=s.size(),f=0;
    cout<<"\nRelational operators are: ";
    for(int i=0; i<sz; i++)
    {
        if(s[i]=='=')
        {
            if(i+1<sz and s[i+1]=='=')
            {
                if(f)
                {
                    cout<<", "<<s[i]<<s[i+1];
                    i++;
                }
                else
                {
                    cout<<s[i]<<s[i+1];
                    i++;
                    f=1;
                }

            }
        }

        if(s[i]=='!')
        {
            if(i+1<sz and s[i+1]=='=')
            {
                if(f)
                {
                    cout<<", "<<s[i]<<s[i+1];
                    i++;
                }
                else
                {
                    cout<<s[i]<<s[i+1];
                    i++;
                    f=1;
                }
            }
        }

        if(s[i]=='>')
        {
            if(i+1<sz and s[i+1]=='=')
            {
                if(f)
                {
                    cout<<", "<<s[i]<<s[i+1];
                    i++;
                }
                else
                {
                    cout<<s[i]<<s[i+1];
                    i++;
                    f=1;
                }
            }
            else
            {
                if(f)
                {
                    cout<<", "<<s[i];
                }
                else
                {
                    cout<<s[i];
                    f=1;
                }
            }

        }

        if(s[i]=='<')
        {
            if(i+1<sz and s[i+1]=='=')
            {
                if(f)
                {
                    cout<<", "<<s[i]<<s[i+1];
                    i++;
                }
                else
                {
                    cout<<s[i]<<s[i+1];
                    i++;
                    f=1;
                }
            }
            else
            {
                if(f)
                {
                    cout<<", "<<s[i];
                }
                else
                {
                    cout<<s[i];
                    f=1;
                }
            }

        }

    }
    if(!f) cout<<"Not found any!";
    cout<<endl<<endl;
    return 0;
}
