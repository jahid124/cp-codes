#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define flw freopen ("0output.txt","w",stdout)
#define flr freopen ("0input.txt","r",stdin)
#define no1s(x) __builtin_popcount(x)
#define parity(x) __builtin_parity(x)
#define leadingZeros(x) __builtin_clz(x)
#define trailingZeros(x) __builtin_ctz(x)
#define mx 100005
///mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// RANDOM SHUFFLE

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;

        if(n<10)
        {
            cout<<n<<endl;
            continue;
        }

        if(n<100)
        {
            int a,b;
            a=n/10;
            b=n%10;
            if(b<a) a--;
            cout<<a+9<<endl;
            continue;
        }

        if(n<1000)
        {
            int a=n/100,t=100;

            while(n!=0)
            {
                int b=n/t;
                n%=t;
                t/=10;

                if(b<a)
                {
                    a--;
                    break;
                }
                if(b>a)
                {
                    break;
                }
                if(n==0 and t!=0)
                {
                    a--;
                    break;
                }
            }

            cout<<a+18<<endl;
            continue;
        }

        if(n<10000)
        {
            int a=n/1000,t=1000;

            while(n!=0)
            {
                int b=n/t;
                n%=t;
                t/=10;

                if(b<a)
                {
                    a--;
                    break;
                }
                if(b>a)
                {
                    break;
                }
                if(n==0 and t!=0)
                {
                    a--;
                    break;
                }
            }
            cout<<a+27<<endl;
            continue;
        }

        if(n<100000)
        {
            int a=n/10000,t=10000;

            while(n!=0)
            {
                int b=n/t;
                n%=t;
                t/=10;

                if(b<a)
                {
                    a--;
                    break;
                }
                if(b>a)
                {
                    break;
                }
                if(n==0 and t!=0)
                {
                    a--;
                    break;
                }
            }
            cout<<a+36<<endl;
            continue;
        }

        if(n<1000000)
        {
            int a=n/100000,t=100000;

            while(n!=0)
            {
                int b=n/t;
                n%=t;
                t/=10;

                if(b<a)
                {
                    a--;
                    break;
                }
                if(b>a)
                {
                    break;
                }
                if(n==0 and t!=0)
                {
                    a--;
                    break;
                }
            }
            cout<<a+45<<endl;
            continue;
        }

        if(n<10000000)
        {
            int a=n/1000000,t=1000000;

            while(n!=0)
            {
                int b=n/t;
                n%=t;
                t/=10;

                if(b<a)
                {
                    a--;
                    break;
                }
                if(b>a)
                {
                    break;
                }
                if(n==0 and t!=0)
                {
                    a--;
                    break;
                }
            }
            cout<<a+54<<endl;
            continue;
        }

        if(n<100000000)
        {
            int a=n/10000000,t=10000000;

            while(n!=0)
            {
                int b=n/t;
                n%=t;
                t/=10;

                if(b<a)
                {
                    a--;
                    break;
                }
                if(b>a)
                {
                    break;
                }
                if(n==0 and t!=0)
                {
                    a--;
                    break;
                }
            }
            cout<<a+63<<endl;
            continue;
        }

        if(n==1000000000) n-=1;

        if(n<1000000000)
        {
            int a=n/100000000,t=100000000;

            while(n!=0)
            {
                int b=n/t;
                n%=t;
                t/=10;

                if(b<a)
                {
                    a--;
                    break;
                }
                if(b>a)
                {
                    break;
                }
                if(n==0 and t!=0)
                {
                    a--;
                    break;
                }
            }
            cout<<a+72<<endl;
            continue;
        }


    }
    return 0;
}
