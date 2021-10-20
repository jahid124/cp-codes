#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define cl CLOCKS_PER_SEC

struct ab{
int a,b;
};

int main()
{
    int n,q,i=0,max=0;
    cin>>n>>q;
    struct ab ab[n+5];
    deque<int>dq,fq;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        dq.pb(a);
    }

    fq=dq;
    for(int i=0;i<n;i++)
    {
        int a=fq.front();
        fq.pop_front();
        int b=fq.front();
        fq.pop_front();
        if(a>b)
        {
            fq.push_front(a);
            fq.push_back(b);
        }
        else
        {
            fq.push_front(b);
            fq.push_back(a);
        }
        ab[i].a=a;
        ab[i].b=b;
    }

    for(int i=0;i<q;i++)
    {
        ll qry;
        cin>>qry;
        if(qry<n)
            cout<<ab[qry-1].a<<" "<<ab[qry-1].b<<"\n";
        else
            cout<<fq.at(0)<<" "<<fq.at((qry-2)%(n-1)+1)<<"\n";
    }
}
