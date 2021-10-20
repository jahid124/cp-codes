#include<bits/stdc++.h>
using namespace std;


int main()
{
    string a,b;
    cin>>a>>b;
    int lenA=a.size(),lenB=b.size(),f1=0,f2=0,f3=0;

    cout<<"\nIt is a: Universal Grammar";

    if(lenA<=lenB)
    {
        cout<<", Context-Free Grammar";

        for(int i=0; i<lenA; i++)
        {
            int f=0;
            if(a[i]<='z' && a[i]>='a')
            {
                f1=1;
                break;
            }
        }

        if(f1==0)
        {
            cout<<", Context-Sensitive Grammar";

            for(int i=0; i<lenB; i++)
            {
                if(f2==0)
                {
                    if(b[i]>= 'A' && b[i]<= 'Z')
                    {
                        f2=1;
                    }
                }
                else
                {
                    if(b[i]>= 'a' && b[i]<= 'z')
                    {
                        f3=1;
                        break;
                    }
                }
            }

            if(f3==0) cout<<", Regular Grammar";
        }
    }

    cout<<"\n\n";

    return 0;
}
