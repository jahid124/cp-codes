#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int main()
{
    fastio;
    int t,cs=1;
    //scanf("%d",&t);
    cin>>t;
    while(t--)
    {
        int n,cnt=0,f1=1,f2=0,mx=-100000000;
        //scanf("%d",&n);
        cin>>n;
        ll sum=0;

        vector<int> vc(n);
        for(int x=0; x<n; x++) cin>>vc[x];

        for(int i=0; i<n; i++)
        {
            if(vc[i]>0) f1=0;
            mx=max(mx,vc[i]);

        }

        if(f1){
            cout<<"Case "<<cs<<": "<<mx<<" 0\n";
            cs++;
            continue;
        }



        int i=0,j=n-1;

        while(i<=j && vc[i]<=0) i++;
        while(i<=j && vc[j]<=0) j--;

        while(i<=j){

            while(i<=j && vc[i]>=0) i++;
            while(i<=j && vc[i]<=0) i++;
            cnt++;

        }
        for(int xx=0; xx<n; xx++)
        {
            if(vc[xx]>0) sum+=vc[xx];

        }

        //printf("Case %d: %lld %d\n",cs++,sum,cnt-1);
        cout<<"Case "<<cs<<": "<<sum<<" "<<cnt-1<<"\n";
        cs++;
    }
    return 0;
}
