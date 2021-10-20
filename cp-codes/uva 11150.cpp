#include<bits/stdc++.h>
using namespace std;
int cnt=0,r;
int c(int n)
{
    if(n<3)
    {
        r=n;
        return 0;
    }

    else
        c((n/3)+(n%3));
    cnt+=n/3;
    return cnt;
}
//vector<int> divisor[100];
int main()
{
    int n,k;
    while(cin>>n)
    {
        k=c(n);
        if(r==2)
            cout<<k+n+1<<"\n";
        else
            cout<<k+n<<"\n";
        cnt=0;
    }


}
