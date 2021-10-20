#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,sz,i,n;
    //char s[100];
    string s;
    //freopen("Input.txt","r",stdin);
    cin>>n;
    cin.ignore();
    //cout << "Enter a string: ";

    //cout<<s.size();
    while(n!=0)
    {
        getline(cin, s);
        for(i=0; i<s.size(); i++)
        {
            if(s[i]>96)
                sz=s[i]-96;
            else
                sz=s[i]-64;
            if(s[i]==' ')
            {
                c++;
            }
            else if(sz<16)
            {
                if(sz%3==0)
                {
                    c+=3;
                }
                else
                    c+=sz%3;
            }
            else if(sz<20)
            {
                c+=sz-15;
            }
            else if(sz<23)
            {
                c+=sz-19;
            }
            else
                c+=sz-22;

        }
        cout<<c<<"\n";
        c=0;
        n--;
    }

}
