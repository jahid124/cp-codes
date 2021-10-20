#include<bits/stdc++.h>
using namespace std;
int part(int arr[],int l, int h)
{
    int pivot=arr[h];
    cout<<h<<" "<<pivot<<" ";
    int i=l-1;
    for(int j=l; j<h; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            int x=arr[i];
            arr[i]=arr[j];
            arr[j]=x;
        }
    }
    int x=arr[i+1];
    arr[i+1]=arr[h];
    arr[h]=x;
    cout<<i+1<<" ";
    return i+1;
}
void quick(int arr[], int l,int h)
{
    if(l<h)
    {
        int p=part(arr,l,h);
        quick(arr,l,p-1);
        quick(arr,p+1,h);
    }

}
void printA(int arr[], int size)
{
    for(int i=0; i<size; i++)
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
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    //printA(a,n);
    quick(a,0,n-1);
    cout<<"Sorted array is:\n";
    printA(a,n);
    //cout<<arr[4];
}

