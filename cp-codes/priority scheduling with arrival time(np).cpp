#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

struct process
{
    int pn,bt,ar,priority;

};

bool btsort(process a, process b)
{
    if(a.priority==b.priority)
    {
        if(a.bt==b.bt) return a.pn<b.pn;
        return a.bt<b.bt;
    }
    return a.priority<b.priority;
}

bool atsort(process a, process b)
{
    if(a.ar==b.ar) return a.pn<b.pn;
    return a.ar<b.ar;
}

int main()
{
    int n,art;
    cout<<"Enter number of process: ";
    cin>>n;
    process p[n+5];
    cout<<"\n\tprocess\tA.T B.T priority\n";
    vector<process>allp;
    for(int i=1; i<=n; i++)
    {
        p[i].pn=i;
        cout<<"\n\tp"<<i<<"\t";
        cin>>p[i].ar;
        cout<<"\t";
        cin>>p[i].bt;
        cin>>p[i].priority;
        allp.pb(p[i]);

    }
    sort(allp.begin(),allp.end(),atsort);
    int mns=allp[0].ar;

    for(int i=0; i<allp.size(); i++)
    {
        allp[i].ar-=mns;
    }

    int ct,last,tat,wt=0;
    vector<process>rq;

    last=allp[0].ar;
    while(!allp.empty() and last>=allp[0].ar)
    {
        rq.pb(allp[0]);
        allp.erase(allp.begin());
    }

    if(allp.empty())
    {
        cout<<"\n\nProcess\tA.T\tB.T\tTAT\tW.T\n\n";
        last=0;
        sort(rq.begin(),rq.end(),btsort);
        int twt;
        for(int i=0; i<rq.size(); i++)
        {
            last+=rq[i].bt;
            twt=last-rq[i].ar-rq[i].bt;
            cout<<rq[i].pn<<"\t"<<rq[i].ar<<"\t"<<rq[i].bt<<"\t"<<last-rq[i].ar<<"\t"<<twt<<"\n";
        }

        cout<<"\n\nTotal waiting time: "<<twt;
        cout<<"\nAvg waiting time: "<<(twt*1.0)/n<<endl;
        return 0;
    }
    cout<<"\n\nProcess\tA.T\tB.T\tTAT\tW.T\n\n";
    last=0,wt=0;
    while(!allp.empty())
    {
        sort(rq.begin(),rq.end(),btsort);
        process pro=rq[0];
        rq.erase(rq.begin());
        last+=pro.bt;
        int twt=last-pro.ar-pro.bt;
        cout<<"P"<<pro.pn<<"\t"<<pro.ar+mns<<"\t"<<pro.bt<<"\t"<<last-pro.ar<<"\t"<<twt<<"\n";
        wt+=twt;
        while(!allp.empty() and last>=allp[0].ar)
        {
            rq.pb(allp[0]);
            allp.erase(allp.begin());
        }

        if(allp.empty())
        {
            sort(rq.begin(),rq.end(),btsort);
            for(int i=0; i<rq.size(); i++)
            {
                last+=rq[i].bt;
                twt=last-rq[i].ar-rq[i].bt; wt+=twt;
                cout<<"P"<<rq[i].pn<<"\t"<<rq[i].ar+mns<<"\t"<<rq[i].bt<<"\t"<<last-rq[i].ar<<"\t"<<twt<<"\n";
            }

            cout<<"\n\nTotal waiting time: "<<wt;
            cout<<"\nAvg waiting time: "<<(wt*1.0)/n<<endl;

        }

    }
    return 0;
}

