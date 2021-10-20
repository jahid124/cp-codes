#include<bits/stdc++.h>
using namespace std;

/**
    S=0
    F={3,4}
    S0={(a,0), (b,2), (c,1)}
    S1={(a,2), (b,4), (c,4)}
    S2={(c,3)}
    S3={(a,3), (b,3), (c,4)}
    S4={}

    sample I/O:
    1. Input: Enter InputString: abcbbc
       Output: Input String accepted

    2. Input: Enter InputString: cc
       Output: Input String accepted

    3. Input: Enter InputString: aaaaacacaaaaaaaaaa
       Output: Input String accepted

    4. Input: Enter InputString: acaccb
       Output: Cannot parse with this String

    5. Input: Enter InputString: abcdbbc
       Output: Invalid InputString



**/

int main()
{
    string InStr;
    int sz,crntState=0;
    vector<int>F={3,4};
    cout<<"Enter InputString: ";
    cin>>InStr;
    sz=InStr.size();
    for(int i=0; i<sz; i++)
    {
        if(crntState==0)
        {
            if(InStr[i]=='a')
            {
                crntState=0;
            }
            else if(InStr[i]=='b')
            {
                crntState=2;
            }

            else if(InStr[i]=='c')
            {
                crntState=1;
            }

            else
            {
                cout<<"\nInvalid InputString\n";
                return 0;
            }
        }

        else if(crntState==1)
        {
            if(InStr[i]=='a')
            {
                crntState=2;
            }
            else if(InStr[i]=='b')
            {
                crntState=4;
            }

            else if(InStr[i]=='c')
            {
                crntState=4;
            }

            else
            {
                cout<<"\nInvalid InputString\n";
                return 0;
            }
        }

        else if(crntState==2)
        {
            if(InStr[i]=='c')
            {
                crntState=3;
            }

            else
            {
                cout<<"\nInvalid InputString\n";
                return 0;
            }
        }

        else if(crntState==3)
        {
            if(InStr[i]=='a')
            {
                crntState=3;
            }
            else if(InStr[i]=='b')
            {
                crntState=3;
            }

            else if(InStr[i]=='c')
            {
                crntState=4;
            }

            else
            {
                cout<<"\nInvalid InputString\n";
                return 0;
            }
        }
        else
        {
            cout<<"\nCannot parse with this String\n";
            return 0;
        }
    }

    for(int i=0; i<F.size(); i++)
    {
        if(F[i]==crntState)
        {
            cout<<"\nInput String accepted\n";
            return 0;
        }
    }
    cout<<"\nCannot parse with this String\n";

    return 0;
}
