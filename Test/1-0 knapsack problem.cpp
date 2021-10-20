#include<bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    return (a>b)?a:b;
}

int ks(int w, int wt[], int v[],int n)
{
    if(n==0 || w==0)
        return 0;
    if(wt[n-1]>w)
        return ks(w, wt, v, n-1);
    else
        return max(v[n-1]+ks(w-wt[n-1], wt, v, n-1), ks(w,wt,v,n-1));
}
int ksd(int W,int wt[],int val[],int n)
{
    int k[n+1][W+1],i,w;
    for (i=0;i<=n;i++)
    {
        for(w=0;w<=W;w++)
        {
            if(i==0 || w==0)
                k[i][w]=0;
            else if(wt[i-1]<=w)
                k[i][w]=max(val[i-1]+k[i-1][w-wt[i-1]],k[i-1][w]);
            else
                k[i][w]=k[i-1][w];
        }
    }
    return k[n][W];
}
int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 30;
    int n = sizeof(val)/sizeof(val[0]);
    cout<<ksd(W, wt, val, n);
    return 0;
}
