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
        vector<int > even,odd;
        map<int, int>mp;
        pair<int , int>p;
        for(int i=0; i<2*n; i++)
        {
            int a;
            cin>>a;
            if(a%2==0)
            {
                even.push_back(i+1);

            }

            else
            {
                odd.push_back(i+1);

            }


        }


        if(odd.size()%2==0 && even.size()%2==0)
        {
            if(odd.size()!=0)
            {
                odd.pop_back();
                odd.pop_back();
            }
            else
            {
                even.pop_back();
                even.pop_back();
            }
        }

        else
        {
            odd.pop_back();
            even.pop_back();
        }
        int i=1;
        for(int i=0; i<odd.size(); i++)
        {
            cout<<odd[i]<<" ";
            if(i%2==1 && i>0)
                cout<<"\n";
        }
        cout<<"2nd\n";
        for(int i=0; i<even.size(); i++)
        {
            cout<<even[i]<<" ";
            if(i%2==1 && i>0)
                cout<<"\n";
        }
    }
    return 0;
}
