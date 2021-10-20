#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes her
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        while(n%2==0)
            n=n/2;
        cout<< n/2 <<"\n";
    }
    return 0;
}
