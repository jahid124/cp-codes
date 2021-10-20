#include<bits/stdc++.h>
using namespace std;
int main()
{
    string c;
    while(cin>>c)
    {
        //int s=c.size();
        for(int i=0;i<c.size();i++)
        {
            printf("%c",c[i]-7);
        }
        cout<<"\n";
    }

}
