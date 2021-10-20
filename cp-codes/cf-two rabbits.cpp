#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,x,y,dis;
        scanf("%lld %lld %lld %lld",&x,&y,&a,&b);
        dis=abs(x-y);

        if(dis%(a+b)==0)
            printf("%lld\n",dis/(a+b));
        else
            printf("-1\n");
    }
    return 0;
}
