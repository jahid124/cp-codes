#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,v="n";
    vector<string>vs;
    while(v!="close")
    {
        string v;
        cin>>v;
        if(v=="close")
            break;
        vs.push_back(v);
    }
    for(int i=0;i<vs.size();i++)
    {
        cout<<vs[i]<<" ";
    }
}
