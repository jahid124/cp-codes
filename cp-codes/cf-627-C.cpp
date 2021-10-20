#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin.ignore();
        string s;
        int c=0,max=0;
        cin>>s;
        int n=s.size();
        for (int i=0; i<n; i++)
        {
            if(s[i]=='L')
                c++;
            else
            {
                if(max<c)
                    max=c;
                c=0;
            }
        }
        if(max<c)
            max=c;
        cout<<max+1<<"\n";
    }
}

