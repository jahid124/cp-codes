#include<bits/stdc++.h>
using namespace std;
int binary(int arr[], int l,int h, int val)
{
    if(l<=h)
    {
        int m=l+(h-l)/2;
        if(arr[m]==val)
            return m;
        if(arr[m]>val)
            return binary(arr,l,m,val);

        return binary(arr,m+1,h,val);
    }
    return -1;
}
void printA(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    int n;
    printf("Enter element num: ");
    cin>>n;
    int a[n];
    cout<<"enter "<<n<<" elements\n" ;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the search value: ";
    int val;
    cin>>val;
    //printA(a,n);
    int r=binary(a,0,n-1,val);
    //cout<<"Sorted array is:\n";
    //printA(a,n);
    //cout<<arr[4];
    r>-1?cout<<"indx="<<r+1:cout<<"not found";
}

