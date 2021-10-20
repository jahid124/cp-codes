#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    int n,q,sum=0;
    cin>>n>>q;
    queue<int>time;
    queue<string>name;
    for(int i=0;i<n;i++)
    {
        string s; int t;
        cin>>s>>t;
        name.push(s);
        time.push(t);
    }

    while(!time.empty())
    {
        string tem; int ttem;
        tem=name.front();
        name.pop();
        ttem=time.front();
        time.pop();
        if(ttem>q)
        {
            ttem=ttem-q;
            sum+=q;
            name.push(tem);
            time.push(ttem);
        }
        else
        {
            sum+=ttem;
            cout<<tem<<" "<<sum<<"\n";
        }
    }
    return 0;
}
