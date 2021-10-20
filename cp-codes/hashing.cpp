#include<bits/stdc++.h>
using namespace std;
#define base 26
#define mod 10000007
#define ll long long int
#define max 1000006
int h[max],p[max],su[max];
char s[max],t[max];

void hashing()
{
    int n=strlen(s);
    h[0]=s[0];
    p[0]=1;
    for(int i=1;i<n;i++)
    {
        h[i]=((h[i-1]*base+s[i]))%mod;
        p[i]=(p[i-1]*base)%mod;
    }
}

ll get_T_hash()
{
    ll start=t[0];
    int s=strlen(t);
    for(int i=0;i<s;i++)
        start=(start*base+t[i])%mod;
    return start;
}

int sub(int l, int r)
{
    if(l==0)
        return h[r];
    return (h[r]-(h[l-1]*p[r-l+1])%mod + mod)%mod;

}
int main()
{

    scanf("%s %s",&s,&t);
    ll T=get_T_hash(),cnt=0;
    hashing();
    int tsize=strlen(t);
    for(int i=0;i<strlen(s);i++)
        printf("h%d = %d\n",i,h[i]);
    for(int i=0;i+1<strlen(s);i++)
        printf("%d\n",sub(i,i+1));
    for(int i=0;i+tsize<strlen(s);i++)
    {
        if(sub(i,i+tsize)==T) cnt++;
    }
    printf("%lld %lld\n",cnt,T);

}
