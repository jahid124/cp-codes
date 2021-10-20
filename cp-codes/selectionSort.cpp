#include<bits/stdc++.h>
using namespace std;
void select(int arr[],int n)
{
    int i,j,min,m;
    for(i=0; i<n-1; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            if(arr[min]>arr[j])
                min=j;
        }
        int x=arr[i];
        arr[i]=arr[min];
        arr[min]=x;
    }
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
    //printA(a,n);
    select(a,n);
    cout<<"Sorted array is:\n";
    printA(a,n);
    //cout<<arr[4];
}

