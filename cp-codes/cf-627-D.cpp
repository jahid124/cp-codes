#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int next(int arr[], int target,int start, int end)
{
    //int start ;

    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        // Move to right side if target is
        // greater.
        if (arr[mid] <= target)
            start = mid + 1;

        // Move left side.
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }

    return ans;
}
int main()
{
    int n;
    cin>>n;
    int a[n],b,c[n];
    long long int cnt=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
         cin>>b;
         c[i]=a[i]-b;
    }

    sort(c,c+n);
    ll left , right, mid;
    for (int i = 0; i < n - 1; ++i) {
        left = i + 1, right = n - 1;
        while (left <= right) {
            mid = (left + right) >> 1;
            if ((c[i] + c[mid]) <= 0) left = mid + 1;
            else right = mid - 1;
        }
        cnt += n - left;
    }
    cout<<cnt<<"\n";


}


