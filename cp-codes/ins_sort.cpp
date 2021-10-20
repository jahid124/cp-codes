#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[], int s)
{
    int i,j,key;
    for(i=1; i<s; i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(arr[j+1]<arr[j])
                swap(arr[j+1],arr[j]);
            else break;
        }
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
    insertion(a,n);
    cout<<"Sorted array is:\n";
    printA(a,n); main();
    //cout<<arr[4];
}


