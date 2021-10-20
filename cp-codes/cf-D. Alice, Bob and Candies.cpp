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
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            v.pb(a);
        }

        int move=0,alice=0,bob=0,left=0,right=n-1,flag=1,al=0,bl=0;


        al=v[left];
        alice=v[left];
        left++;

        bl=0;
        flag=0;
        //cout<<move<<" "<<alice<<" "<<bob<<" "<<left<<" "<<right<<" "<<flag<<" "<<al<<" "<<bl<<"\n";
        while(left<=right)
        {

            move++;
            //cout<<left<<" "<<right<<"\n";
            if(flag==1)
            {
                //cout<<"in ";
                while(al<=bl && left<=right)
                {
                    al=al+v[left];
                    alice+=v[left];
                    left++;
                }
                bl=0;
                flag=0;
            }
            else
            {
                //cout<<"in2 ";
                while(bl<=al && left<=right)
                {
                    bl=bl+v[right];
                    bob+=v[right];
                    right--;
                }
                al=0;
                flag=1;
            }
        }
        cout<<move+1<<" "<<alice<<" "<<bob<<"\n";

    }
}
