#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int > v;
        string s1,s2;
        cin>>s1>>s2;

        for(int i=n-1; i>=0; i--)
        {
            if(s2[i]!=s1[0])
            {
                v.pb(i+1);

                for(int j=0; j<= i; j++)
                {
                    if(s1[j]=='0') s1[j]='1';
                    else s1[j]='0';
                }
                reverse(s1.begin(), s1.begin()+i+1);
                ///cout<<s1<<endl;
            }
            else
            {
                v.pb(1);
                v.pb(i+1);
                if(s1[0]=='0') s1[0]='1';
                else s1[0]='0';
                ///cout<<s1<<endl;
                for(int j=0; j<= i; j++)
                {
                    if(s1[j]=='0') s1[j]='1';
                    else s1[j]='0';
                }
                reverse(s1.begin(), s1.begin()+i+1);
                ///cout<<s1<<endl;
            }
        }
        cout<<v.size();
        for(int i=0; i<v.size(); i++)
        {
            cout<<" "<<v[i];
        }
        cout<<"\n";
    }
    return 0;
}
