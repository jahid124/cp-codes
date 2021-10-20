#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

struct process {
    int pn,bt;
};
bool btsort(process a, process b)
{
    if(a.bt==b.bt) return a.pn<b.pn;
    return a.bt<b.bt;
}
int main()
{
    cout<<"Enter number of process: ";
    int n;
    cin>>n;
    vector<process>allp;
    cout<<"\nprocess\tB.T.\n";
    for(int i=0; i<n; i++)
    {
        process p;
        cout<<"P"<<i+1<<"\t";
        p.pn=i+1;
        cin>>p.bt;
        allp.pb(p);
    }

    sort(allp.begin(), allp.end(),btsort);
    int wt=0,twt=0;
    cout<<"\n\n\tprocess\tB.T.\tW.T\n";
    for(int i=0; i<allp.size(); i++)
    {
        twt+=wt;
        cout<<"\tP"<<allp[i].pn<<"\t"<<allp[i].bt<<"\t"<<wt<<"\n";
        wt+=allp[i].bt;
    }
    cout<<"\nTotal waiting time: "<<twt;
    cout<<"\nAvg waiting time: "<<(twt*1.0)/n<<endl;
}
