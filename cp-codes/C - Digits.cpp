#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int i;
void rec(string s)
{
    i++;
    if(s.size()==1 && s[0]=='1') return;
    int x=s.size();
    rec(to_string(x));

}

int main()
{
    string n;
    cin>>n;
    while(n!="END")
    {
        i=0;
        rec(n);
        cout<<i<<"\n";
        cin>>n;
    }
    return 0;
}

