#include<bits/stdc++.h>
using namespace std;
void rev(int arr[],int l,int h)
{
    if(l<h)
    {
        swap(arr[l],arr[h]);
        rev(arr,l+1,h-1);
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
    rev(a,0,n-1);
    cout<<"Sorted array is:\n";
    printA(a,n);
    //cout<<arr[4];
}


