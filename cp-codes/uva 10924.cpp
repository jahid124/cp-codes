#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a,b;
    while(cin>>s)
    {
        int sm=0,i,f=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                sm+=s[i]-'a'+1;
            }
            else
            {
                sm+=s[i]-'A'+27;
            }
        }
        for(i=2;i*i<=sm;i++)
        {
            if(sm%i==0)
            {
                cout<<"It is not a prime word."<<endl;
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<"It is a prime word."<<endl;
        }
    }

}
