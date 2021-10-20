#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    int n;
    cin>>n;
    map<string,int>mp;
    mp["WA"]=0;
    mp["AC"]=0;
    mp["TLE"]=0;
    mp["RE"]=0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        mp[s]++;
    }
    cout<< "AC x "<<mp["AC"]<<"\nWA x "<<mp["WA"]<<"\nTLE x "<<mp["TLE"]<<"\nRE x "<<mp["RE"]<<"\n";
}
