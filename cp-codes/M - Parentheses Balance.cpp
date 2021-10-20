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
    bool fl=1;
    while(t--)
    {

        string s;
        if(fl)
        {
            getchar();
            fl=0;
        }

        ///getchar();
        ///cin.ignore();

        ///cin>>s;
        getline(cin,s);
        ///cout<<s<<"\n";
        stack<char>st;
        int f=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.size()==0)
                {
                    //cout<<"ck";
                    f=1;
                    break;
                }
                else if(s[i]==']')
                {
                    if(st.top()=='[')
                        st.pop();
                    else
                    {
                        f=1;
                        break;
                    }
                }
                else if(s[i]==')')
                {
                    if(st.top()=='(')
                        st.pop();
                    else
                    {
                        f=1;
                        break;
                    }
                }
                else
                {
                    f=1;
                    break;
                }
            }
        }
        if(st.size() || f)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
}
