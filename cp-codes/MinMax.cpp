#include<bits/stdc++.h>
using namespace std;
int min,max;
void minmax(int arr[],int l, int h, int &min,int &max)
{
    if(l==h)
    {
        if(arr[l]>max)
            max=arr[l];
        if(arr[l]<min)
            min=arr[l];
        return;
    }
    if(h-l==1)
    {
        if(arr[l]>arr[h])
        {
            if(arr[l]>max)
                max=arr[l];
            if(arr[h]<min)
                min=arr[h];
        }
        else
        {
            if(arr[h]>max)
                max=arr[h];
            if(arr[l]<min)
                min=arr[l];
        }
        return;
    }
    int m=(l+h)/2;
    minmax(arr,l,m,min,max);
    minmax(arr,m+1,h,min,max);
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
    int min=INT_MAX, max=INT_MIN;
    //printA(a,n);
    minmax(a,0,n-1,min,max);
    cout<<"Sorted array is:\n";
    //printA(a,n);
    //cout<<arr[4];
    cout<<min<<" "<<max;
}

