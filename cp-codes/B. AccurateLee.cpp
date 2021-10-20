/**Bismilla- hir  rahma-nir rahi-m


@uthor   Md Hasibur Rahman (Evan)
                JKKNIU
*/


#include<bits/stdc++.h>


#define         MAX                 11000000
#define         sc(a)               scanf("%d",&a)
#define         sc2(a,b)            scanf("%d %d",a&a,&b)
#define         PritCase(i,value)   printf("Case %d: %d\n",i,value)
#define         ll                  long long



using namespace std;



ll gcd(ll a, ll b)
{
    if(a<b)
        swap(a,b);
    if(a%b==0 | b==0)
        return b;
    else
        return gcd(b,a%b);
}



ll lcm(ll a, ll b)
{
    return (a*b)/gcd(a,b);
}



bool isPrime(ll value)
{
    if(value==2)
        return true;
    for(ll i=2;i*i<=value;i++)
        if(value%i==0)
            return false;
    return true;
}



bool isPowerof2(ll value)
{
    if(value==2 || value==1)
        return true;
    while(value)
    {
        value/=2;
    }
    if(value==1)
    return true;
    return false;
}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        if(s.find("10")!=string::npos)
        {
            string ans = "";
            for(int i=0;i<n;i++)
            {
                if(s[i]=='1')
                    break;
                else
                    ans+='0';
            }
            ans+='0';
            for(int i=n-1;i>=0;i--)
            {
                //cout<<s[i]<<" ekhaen ";
                if(s[i]=='0')
                    break;
                else
                    ans+='1';
            }
            cout<<ans<<"\n";
        }
        else
        {
            cout<<s<<"\n";
        }
    }
    return 0;
}

