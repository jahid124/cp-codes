#include<bits/stdc++.h>
using namespace std;
main()
{


    vector <int>prime;
    bitset <1001> b;
    b.set();
    b[0]=0;
    prime.push_back(1);
    for(int i=2; i<=1001; i++)
        if(b[i])
        {
            prime.push_back(i);
            for(int j=i*i; j<=1001; j+=i)
                b[j]=0;
        }
    int N,C,i,j,cnt=0;
    while(scanf("%d %d",&N,&C)==2)
    {
        cnt=0;
        for( i=0; prime[i]<=N; i++)
            cnt++;
        cout<<N<<" "<<C<<":"<<" ";



        if(cnt<=(2*C) || cnt<=((2*C)-1))
        {
            for(i=0; prime[i]<=N; i++)
                cout<<prime[i]<<" ";
            cout<<"\n\n";

        }
        if((cnt&1)&&(cnt>(2*C)))
        {
            C=(2*C)-1;

            for(i=((cnt/2)-(C/2)),j=0; j<C; j++,i++)
                cout<<prime[i]<<" ";
            cout<<"\n\n";

        }

        else if(!(cnt&1) &&(cnt>(2*C)))
        {
            C=2*C;


            for(i=((cnt/2)-(C/2)),j=0; j<C; j++,i++)
                cout<<prime[i]<<" ";
            cout<<"\n\n";




        }
    }

}
