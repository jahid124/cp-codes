#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i=0;
    while(cin>>s)
    {
        if(s[0]=='*')
        {
            break;
        }

        else if(s[0]=='H')
        {
            i++;
            cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
        }

        else
        {
            i++;
            cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
        }

    }
}
