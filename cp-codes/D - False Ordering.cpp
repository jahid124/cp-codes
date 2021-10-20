#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

struct pr{

    int idx,occur;

};
pr p[1005];
void nod()
{
    p[1].idx=1;
    p[1].occur=0;
    for(int i=2; i<=1000;i++)
    {
        p[i].idx=i;
        for(int j=i;j<=1000;j+=i)
        {
            p[j].occur++;

        }
    }
}
bool logic(pr a, pr b)
{
    if(a.occur<b.occur) return true;
    else if(a.occur==b.occur )
    {
        if(a.idx>b.idx) return true;
    }
    return false;
}
int main()
{

    nod();
    vector<pr>vec;
    for(int i=1; i<=1000; i++)
        vec.pb(p[i]);
    sort(vec.begin(),vec.end(),logic);

    /*for(int i=0; i<1000; i++)
        cout<<vec[i].idx<<endl;*/

    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        cout<<"Case "<<cs++<<": "<<vec[num-1].idx<<"\n";
    }
}
