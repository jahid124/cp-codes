#include<bits/stdc++.h>
using namespace std;
void mergef(int arr[], int l, int m, int r);
void mergeS(int arr[], int l, int r)
{
    if(l<r)
    {
        int m= (l+r)/2;
        mergeS(arr, l,m);
        mergeS(arr,m+1,r);
        mergef(arr,l,m,r);

    }
}

void mergef(int arr[], int l, int m, int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    //cout<<n1<<" "<<n2<<" ";
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j]=arr[m+1+j];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        k++;
        j++;
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
    mergeS(a,0,n-1);
    cout<<"Sorted array is:\n";
    printA(a,n);
    //cout<<arr[4];
}
