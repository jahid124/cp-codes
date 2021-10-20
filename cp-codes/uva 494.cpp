#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j;
    while(getline(cin,s))
    {
        int c=0, sz=s.size();
        //cout<<sz<<endl;
        for(i=0; i<sz; i++)
        {
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
            {
                c++;
                for(j=i+1; j<sz; j++)
                {
                    if( ! ((s[j]>=65 && s[j]<=90) || (s[j]>=97 && s[j]<=122))    )
                    {
                        i=j;
                        break;
                        cout<<"in ";
                    }
                    if(j==sz-1)
                        i=j;
                    //cout<<"In ";
                }
            }
            //cout<<i<<" ";
        }
        cout<<c<<endl;
    }

}
