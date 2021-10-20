#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int l,a[100],c=0;
        cin>>l;
        for(int i=0;i<l;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<l-1;i++)
        {
            for(int j=0;j<l-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                    c++;
                }

            }
        }
        cout<<"Optimal train swapping takes "<<c<<" swaps.\n";
    }
}
