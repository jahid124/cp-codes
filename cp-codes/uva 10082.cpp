#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100]={ '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', 'Q','W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\'', 'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/' };
    string s;
    int i,j;
    while(getline(cin,s))
    {
        int sz=s.size(),f=0;
        for(i=0;i<sz;i++)
        {
            for(j=0;j<47;j++)
            {
                if(s[i]==arr[j])
                {
                    cout<<arr[j-1];
                    f=1;
                    break;
                }

            }
            if(f==0)
            {
                cout<<s[i];

            }
            f=0;
        }
        cout<<"\n";
    }
}
