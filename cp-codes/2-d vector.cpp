#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int> >ar;
    vector<int>row;
    for(int i=0;i<3;i++)
    {
        vector<int>row;
        for(int j=0;j<3;j++)
        {
            int value;
            cin>>value;
            row.push_back(value);
        }
        ar.push_back(row);
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
}
