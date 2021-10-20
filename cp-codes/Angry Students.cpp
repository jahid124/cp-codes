#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        char c;
        string s;
        int a,cnt=0;
        cin>>a;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin>>s;
        for(int i=0;i<a;i++)
        {
            if(s[i]=='A')
                cnt=0;
            else
                cnt++;
        }
        cout<<cnt<<"\n";
    }
}
