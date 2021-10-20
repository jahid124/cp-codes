#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a>b)
            swap(a,b);
        if(a>c)
        {
            swap(a,c);
            swap(b,c);
        }
        if(b>c)
            swap(b,c);
        //cout<<a<<" "<<b<<" "<<c<<endl;
        if(a==b && b==c)
            cout<<a+(a/2)<<endl;
        else if(a==b || b==c)
        {
            if(a==b)
            {
                if(a+b<=c)
                    cout<<a+b<<endl;
                else
                    cout<<(c/2)*2+b-(c/2)<<endl;
            }
            else
            {
                if(b+b<=a)
                    cout<<c+b<<endl;
                else
                    cout<<(a/2)*2+b-(a/2)<<endl;
            }
        }
        else
        {
            if(a+b<=c)
                cout<<a+b<<endl;
            else
            {

                cout<<b+((c-b+a)/2)<<endl;
            }

        }

    }


}
