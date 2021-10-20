#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x!=0)
    {
        int b,o=0,t=0,th=0,f=0,fi=0,s=0,se=0,e=0,n=0,z=0,i;
        vector<int>a;
        cin>>b;
        for(i=1; i<=b; i++)
        {
            int u=i;
            while(u!=0)
            {
                int r;
                r=u%10;
                u/=10;
                a.push_back(r);
                if(r==0)
                    z++;
                else if(r==1)
                    o++;
                else if(r==2)
                    t++;
                else if(r==3)
                    th++;
                else if(r==4)
                    f++;
                else if(r==5)
                    fi++;
                else if(r==6)
                    s++;
                else if(r==7)
                    se++;
                else if(r==8)
                    e++;
                else
                    n++;
            }
        }
        cout<<z<<" "<<o<<" "<<t<<" "<<th<<" "<<f<<" "<<fi<<" "<<s<<" "<<se<<" "<<e<<" "<<n<<endl;
        x--;
    }
}
