#include<bits/stdc++.h>
using namespace std;
#define pi 3.141593
int main()
{
    int t,l;
    double r;
    cin>>t;
    while(t--)
    {
        cin>>l;
        r=l*l*pi;
        std::cout << std::fixed;
        cout << setprecision(4) << r << endl;
    }

}
