#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    long int t[6],r;
    freopen ("a.txt","r",stdin);
    while(cin>>a[0])
    {

        for(int i=1; i<9; i++)
        {
            cin>>a[i];
        }
        t[0]=a[1]+a[2]+a[3]+a[5]+a[6]+a[7];
        t[1]=a[1]+a[2]+a[3]+a[4]+a[6]+a[8];
        r=t[0]>t[1]?t[1]:t[0];
        t[2]=a[0]+a[2]+a[4]+a[5]+a[6]+a[7];
        r=t[2]>r?r:t[2];
        t[3]=a[0]+a[2]+a[3]+a[4]+a[7]+a[8];
        r=t[3]>r?r:t[3];
        t[4]=a[0]+a[1]+a[3]+a[5]+a[7]+a[8];
        r=t[4]>r?r:t[4];
        t[5]=a[0]+a[1]+a[4]+a[5]+a[6]+a[8];
        r=t[5]>r?r:t[5];
        if(r==t[1])
            cout<<"BCG "<<r<<endl;
        else if(r==t[0])
            cout<<"BGC "<<r<<endl;
        else if(r==t[5])
            cout<<"CBG "<<r<<endl;
        else if(r==t[4])
            cout<<"CGB "<<r<<endl;
        else if(r==t[2])
            cout<<"GBC "<<r<<endl;
        else
            cout<<"GCB "<<r<<endl;
    }
}
