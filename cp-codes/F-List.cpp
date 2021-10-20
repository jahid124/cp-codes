#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void show(list<int> &l)
{
    for(auto i=l.begin(); i!=l.end(); i++)
        cout<<*i<<"\n";
    //cout<<"";
}
int main()
{
    int t;
    cin>>t;
    list<int>l;
    list<int>:: iterator it=l.begin();
    while(t--)
    {
        int a;
        cin>>a;
        if(a==0)
        {
            int x;
            cin>>x;
            if(l.empty())
            {
                l.push_front(x);
                //cout<<l.size()<<"\n";;
                it=l.begin();
                //cout<<"ok\n";
            }
            else
            {
                it=l.insert(it,x);
                //cout<<"ok2\n";
            }

        }
        else if(a==1)
        {
            int d;
            cin>>d;
            if(d>0)
            {
                for(int i=0; i<abs(d); i++)
                    it++;
            }
            else
            {
                for(int i=0; i<abs(d); i++)
                    it--;
            }

        }
        else
        {
            it=l.erase(it);
        }

    }
    show(l);
    main();
    return 0;
}
