#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    for(int i=0;i<5;i++)
    {
        int v;
        cin>>v;
        s.push(v);
    }
    cout<<s.size()<<" ";
    for(int i=0;i<s.size();i++)
    {

        cout<<s.top()<<" ";
        s.pop();
    }
}
