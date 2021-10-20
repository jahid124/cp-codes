#include<bits/stdc++.h>
using namespace std;

/**

    Conditions:
    i) number of production must be greater than 1.
    ii) productions must have common sequence at beginning
    ii) There must not have gamma in productions

    Input:
    Enter start symbol: S
    Enter number of production of S: 5
    Enter 5 production:
    aaaaaa
    aaaaab
    aaabcd
    aaxy
    aaafgh

    Output:
    After removing left factoring:

    S => aaS'
    S' => aaaa | aaab | abcd | xy | afgh




**/

int main()
{
    char start,c;
    int n,minSize=INT_MAX,f,pos;
    string alpha;
    cout<<"Enter start symbol: ";
    cin>>start;

    cout<<"Enter number of production of "<<start<<": ";
    cin>>n;

    vector<string> strings(n+5);

    cout<<"Enter "<<n<<" production:\n";

    for(int i=0; i<n; i++)
    {
        cin>>strings[i];
        minSize=min(minSize,(int)strings[i].size());
    }

    for(int i=0; i<minSize; i++)
    {
        c=strings[0][i];
        f=0;
        for(int j=0; j<n; j++)
        {
            if(strings[j][i]!=c)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            pos=i;
            break;
        }
        else alpha+=c;
    }

    cout<<"\nAfter removing left factoring:\n";
    cout<<endl<<start<<" => "<<alpha<<start<<"'\n"<<start<<"' => ";
    for(int i=0; i<n; i++)
    {
        if(i!=n-1)
        {
            cout<<strings[i].substr(pos,strings[i].size()-pos)<<" | ";
        }
        else
        {
            cout<<strings[i].substr(pos,strings[i].size()-pos)<<"\n";
        }
    }

    cout<<"\n\n";

    return 0;
}
