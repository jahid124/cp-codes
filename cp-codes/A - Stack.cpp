#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{

    stack<int>st;
    string s;
    getline(cin,s);

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' ')
            continue;
        if(s[i]=='*')
        {
            ll a,b;
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(a*b);
            //cout<<a<<" * "<<b<<"\n";
        }
        else if(s[i]=='+')
        {
            ll a,b;
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(a+b);
            //cout<<a<<" + "<<b<<"\n";
        }
        else if(s[i]=='-')
        {
            ll a,b;
            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            st.push(b-a);
            //cout<<b<<" - "<<a<<"\n";
        }
        else
        {
            ll num;
            if(s[i+1]!=' ')
            {
                num=(s[i]-'0')*10+(s[i+1]-'0');
                i+=1;
                if(s[i+1]!=' ')
                {
                    num=(num*10)+(s[i+1]-'0');
                    i=i+1;
                }
            }
            else num=s[i]-'0';
            st.push(num);
            //cout<<num<<"\n";
        }
    }
    cout<<st.top()<<"\n";
    return 0;
}
