#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=1;
    scanf("%d",&t);
    while(i<=t)
    {
        long long int a,b,tmp;
        scanf("%lld",&a);
        b=(1+sqrt(4*a-3))/2;
        tmp=b*b-b+1;

        if(tmp<a)
        {
            if(tmp+b-1<a)
                b++;
        }
        tmp=b*b-b+1;


        printf("Case %d: ",i);
        if(b%2==0)
        {
            if(tmp==a)
                printf("%lld %lld\n",b,b);
            //cout<<b<<","<<b<<"\n";
            else if(tmp>a)
                printf("%lld %lld\n",b-(tmp-a),b);
            //cout<<b-(tmp-a)<<","<<b<<"\n";
            else
            {
                printf("%lld %lld\n",b,b-(a-tmp));
                //cout<<b<<","<<b-(a-tmp)<<"\n";
            }

        }
        else
        {
            if(tmp==a)
                printf("%lld %lld\n",b,b);
            else if(tmp>a)
                printf("%lld %lld\n",b,b-(tmp-a));
            //cout<<b<<","<<b-(tmp-a)<<"\n";
            else
            {
                printf("%lld %lld\n",b-(a-tmp),b);
                //cout<<b-(a-tmp)<<","<<b<<"\n";
            }

        }
        i++;
    }
    return 0;
}

