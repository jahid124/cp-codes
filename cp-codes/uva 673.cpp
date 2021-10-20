#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <char>s;
    string st;
    long long int n,i;
    char c;
    //freopen("input.txt","r",stdin);
    cin>>n;
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.ignore();
    while(n--)
    {
        getline(cin, st);
        for(int i=0; st[i]!='\0'; i++)
        {
            if(s.empty())
            {
                if(st[i]==')' || st[i]==']')
                {
                    s.push(st[i]);
                    break;
                }

            }

            if(st[i]=='(' || st[i]=='[')
                s.push(st[i]);
            else
            {
                c=s.top();
                //s.pop();
                if(st[i]==')')
                {
                    if(c!='(')
                        break;
                }

                if(st[i]==']')
                {
                    if(c!='[')
                        break;
                }
                s.pop();
            }

        }
        if(s.empty())
            cout<<"Yes\n";
        else
            cout<<"No\n";

        while(!s.empty())
            s.pop();
        //ds(s);
    }
}
