#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    //fastio;
    map<string,int>mp;
    set<string>st;
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        int a;
        scanf("%d",&a);
        if(a==0)
        {
            //fflush(stdin);
            string s;
            ll b;
            cin.ignore();
            fflush(stdin);
            scanf("%s %lld",&s,&b);
            st.insert(s);
            //cout<<s<<" "<<b<<"\n";
            mp[s]=b;

        }
        else if(a==1)
        {
            //fflush(stdin);
            string s;
            cout<<"in\n";
            scanf("%s",&s);
            //cout<<s<<"\n";
            //cout<<mp[s]<<"\n";
            printf("in %lld\n",mp[s]);

        }

        else if(a==2)
        {
            string s;
            scanf("%s",&s);
            mp.erase(s);
            st.erase(s);
        }
        else
        {
            string l,r;
            scanf("%s %s",&l,&r);
            auto f=lower_bound(st.begin(),st.end(),l);
            auto t=upper_bound(st.begin(),st.end(),r);
            for(auto it=f;it!=t;it++)
            {

                printf("%s %lld\n",*it,mp[*it]);
            }

        }

    }
    return 0;
}


