#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define fi freopen("0input.txt","r",stdin)

int main()
{
    fi;
    int t=1,T;
    cin>>T;
    while(T!=0)
    {
        cout<<"Scenario #"<<t<<"\n";t++;
        map<int ,int>m;
        vector<int>v;
        for(int i=0;i<T;i++)
        {
            int n;
            cin>>n;
            for(int j=0;j<n;j++)
            {
                int a;
                cin>>a;
                m[a]=i;
            }
        }

        string s;
        queue<int>q[T];
        cin.ignore();
        cin>>s;
        while(s!="STOP")
        {
            if(s=="ENQUEUE")
            {
                int x;
                cin>>x;
                q[m[x]].push(x);
            }
            else
            {
                for(int k=0;k<T;k++)
                {
                    if(q[k].empty())
                        continue;
                    else
                    {
                        int elmnt=q[k].front();
                        q[k].pop();
                        cout<<elmnt<<"\n";
                        break;
                    }
                }
            }
            cin.ignore();
            cin>>s;
        }
    }
}
