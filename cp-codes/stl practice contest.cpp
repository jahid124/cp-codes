#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define fi freopen("0input.txt","r",stdin)

int main()
{
    //fi;
    int n;
    cin>>n;
    set<string>s;
    map<string,int>m;
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        string msg;
        cin>>msg;
        int a,b;
        a=s.size();
        s.insert(msg);
        b=s.size();
        if(a==b)
        {
            m[msg]++;
            cout<<msg<<m[msg]<<"\n";
        }
        else
        {
            cout<<"OK\n";
            m[msg]=0;
        }
    }
}
