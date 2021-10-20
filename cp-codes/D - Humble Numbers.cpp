#include<vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long int
#define pb push_back

map<int,bool>mp;
vector<int>hn;

void humble_gen(ll n)
{
    if(n>2000000000) return;
    if(mp[n]) return;
    mp[n]=true;
    hn.pb(n);
    humble_gen(n*2);
    humble_gen(n*3);
    humble_gen(n*5);
    humble_gen(n*7);
}

int main()
{
    humble_gen(1);
    sort(hn.begin(),hn.end());
    int n;
    while(1)
    {
        cin>>n;
        if(!n) break;

        if(n%100>10 && n%100<=20) cout<<"The "<<n<<"th humble number is "<<hn[n-1]<<".\n";
        else if(n%10==1) cout<<"The "<<n<<"st humble number is "<<hn[n-1]<<".\n";
        else if(n%10==2) cout<<"The "<<n<<"nd humble number is "<<hn[n-1]<<".\n";
        else if(n%10==3) cout<<"The "<<n<<"rd humble number is "<<hn[n-1]<<".\n";
        else cout<<"The "<<n<<"th humble number is "<<hn[n-1]<<".\n";

    }
    return 0;
}
