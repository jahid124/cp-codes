#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
int main()
{
    int t;
    cin>>t;
    map<int,int>m;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        m[a]=b;
    }
    for(int i=0;i<t;i++)
    {
        cout<< m[i] ;

    }
}
