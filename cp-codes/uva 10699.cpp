#include<bits/stdc++.h>
using namespace std;
#define max 1000005
#define pb push_back
std::vector <int> arr[max];
int nopd[max];
void nod()
{
    for(int i=2; i<=max; i++)
    {
        for(int j=i; j<=max; j+=i)
        {
            nopd[j]++;
            arr[j].pb(i);
        }
    }
}


int main()
{
    int t,c=0;
    nod();
    cin>>t;

    while(t!=0)
    {
        int tem=0,count=0;
        for(auto i: arr[t])
        {
            if(tem>i)
                break;
            tem=i;
            if(nopd[i]>1)
                continue;
            count++;

        }
        cout<<t<<" : "<<count<<"\n";
        cin>>t;
    }
    return 0;
}
