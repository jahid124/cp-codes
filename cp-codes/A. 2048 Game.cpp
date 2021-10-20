#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define fi freopen("0input.txt","r",stdin);
int main()
{
    //fi;
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        stack<int>q;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            if(a>2048)
                continue;
            v.pb(a);

        }

        sort(v.begin(),v.end());

        for(int i=v.size()-1; i>=0; i--)
        {
            q.push(v[i]);

        }

        while(!q.empty())
        {
            if(q.top()==2048)
                break;
            int f=0,num=q.top();
            queue<int>q1;
            do
            {
                //cout<<"in ";
                int a,b;
                if(!q.empty())
                {
                    if(num==q.top())
                    {
                        a=q.top();
                        q.pop();
                    }
                    else f=1;
                }


                if(!q.empty())
                {
                    if(num==q.top())
                    {
                        //cout<<"another ";
                        b=q.top();
                        q.pop();
                        q1.push(a+b);
                    }
                    else f=1;
                }
                else f=1;
                //cout<<a<<" "<<b<<" ";
            }
            while(!f);

            while(!q1.empty())
            {
                int x=q1.front();
                q1.pop();
                q.push(x);
            }

        }
        if(q.empty())
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}
