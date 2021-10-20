#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

struct process{

    int pn,bt,p;
};

bool sort_process(process a, process b)
{
    if(a.p==b.p) return a.pn<b.pn;
    return a.p<b.p;
}

int main()
{
    int n;
    cout<<"Enter number of process: ";
    cin>>n;
    cout<<"\nEnter "<<n<<" process BT and priority:\n\n";
    cout<<"\tprocess BT Priority\n";
    cout<<"       -------- -- --------\n";
    vector<process>processes;
    for(int i=0; i<n; i++)
    {
        cout<<"\t"<<"p"<<i+1<<"       ";
        process p;
        p.pn=i+1;
        cin>>p.bt;
        cin>>p.p;
        processes.pb(p);
    }

    sort(processes.begin(),processes.end(),sort_process);

    int wt=0,twt=0,tat=0;
    cout<<"\n\nOUTPUT:\n\tprocess\tB.T.\tW.T\n";
    for(int i=0; i<processes.size(); i++)
    {
        tat+=processes[i].bt;
        twt+=wt;
        cout<<"\tP"<<processes[i].pn<<"\t"<<processes[i].bt<<"\t"<<wt<<"\n";
        wt+=processes[i].bt;
    }
    cout<<"\nTotal waiting time: "<<twt;
    cout<<"\nAvg waiting time: "<<(twt*1.0)/n;
    cout<<"\nTurn around time: "<<tat<<endl;
}
