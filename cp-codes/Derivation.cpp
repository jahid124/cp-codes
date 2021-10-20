#include<bits/stdc++.h>
using namespace std;

/**

Input:
    Enter number of grammar: 4

    Enter 4 grammar L=R format:

    S=ABC
    A=aB
    B=aC
    C=xx

    Enter target string: cabc

Output:
    Derivation: S => ABC => aBBC => aaCBC => aaxxBC => aaxxaCC => aaxxaxxC => aaxxaxxxx

            cabc != aaxxaxxxx
            Parsing failed
**/

int main()
{
    int n,i=0;
    char c;
    string s,tem,fStr;
    map<char,string> mp;

    cout<<"Enter number of grammar: ";
    cin>>n;

    cout<<"\nEnter "<<n<<" grammar L=R format:\n\n";
    for(int i=0; i<n; i++)
    {
        cin>>tem;
        mp[tem[0]]=tem.substr(2,tem.size()-2);
    }

    cout<<"\nEnter target string: ";
    cin>>fStr;

    s=mp['S'];
    cout<<"\nDerivation: S => "<<s;
    while(i<s.size())
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            if(mp[s[i]][0]=='\0')
            {
                i++;
                continue;
            }
            tem=s.substr(0,i)+mp[s[i]]+s.substr(i+1,s.size()-i-1);
            s=tem;
            cout<<" => "<<s;
        }
        else i++;
    }

    if(fStr==s)
    {
        cout<<"\n\n\t    String matching\n\t    Parsing successful\n";
    }
    else
    {
        cout<<"\n\n\t    "<<fStr<<" != "<<s<<"\n\t    Parsing failed\n";
    }
    return 0;
}
