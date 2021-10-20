#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    //freopen("0input.txt","r",stdin);
    while(cin>>t)
    {

        set <int> s;
        long long int a[t];
        for(int i=0;i<t;i++)
        {
            cin>>a[i];
            if(i==0)
                continue;
            int x=abs(a[i]-a[i-1]);
            //cout<<x<<"\n";
            s.insert(x);
        }

        //cout<<sz<<" "<<le<<" "<<*(s.rbegin())<<endl;
        if(t==1)
        {
            cout<<"Jolly\n";
            continue;
        }
        int sz=s.size();
        int le=*(--s.end());

        if(sz==t-1 && le==t-1)
            cout<<"Jolly\n";
        else
            cout<<"Not jolly\n";
        s.clear();
    }

}
