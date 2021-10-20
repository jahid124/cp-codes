#include<bits/stdc++.h>
using namespace std;
int ctoi(char a)
{
    return a-'0';
}
int main()
{
    int n,k,i,j,r,a=1;
    string s;
    while(getline(cin, s))
    {

        a=1;
        //cin>>n;
        if(s[1]=='0')
        {
            n=10;
            k=s.size()-3;
        }
        else
        {
            k=s.size()-2;
            n=ctoi(s[0]);
        }

        r=n%k;
        if(r==0)
        {
            for(i=n; i>=k; i-=k)
            {
                a=a*i;
            }
        }
        else
        {
            for(i=n; i>=r; i-=k)
            {
                a=a*i;
            }
        }
        cout<<a<<endl;
    }
}
