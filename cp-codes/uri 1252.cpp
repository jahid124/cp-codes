#include<bits/stdc++.h>
using namespace std;
#define in scanf
#define out printf
#define loop(x, n) for(int x = 0; x < n; ++ x)
int main()
{
    int n,m;
    /*in("%d %d",&n,&m);
    while(n!=0 && m!=0)
    {
        int a[n];
        loop(i,n)
        {
            in("%d",&a[i]);
        }
        loop(i,n)
        {
            loop(j,n)
            {

            }
        }

    }*/
    map<int , int>mp;
    mp.insert(pair<int, int>(1,100));
    mp.insert(pair<int,int>(2,200));
    map<int, int>::iterator itr;
    for(itr=mp.begin(); itr!=mp.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
}
