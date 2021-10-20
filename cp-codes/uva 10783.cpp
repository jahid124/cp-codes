#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=1;
    cin>>t;
    while(t!=0)
    {
        int a,b,s;
        cin>>a>>b;
        if(a>b)
        {
            swap(a,b);
        }
        if(a%2==0)
        {
            if(b%2==0)
            {
                s=((a+b)/2)*((b-a)/2);
                cout<<"Case "<<i<<": "<<s<<endl;
                i++;
            }
            else
            {
                s=(((a+b)/2)+1)*(((b-a)/2)+1);
                cout<<"Case "<<i<<": "<<s<<endl;
                i++;
            }
        }
        else
        {
            s=((a+b)/2)*(((b-a)/2)+1);
            cout<<"Case "<<i<<": "<<s<<endl;
            i++;
        }
        t--;
    }
}
