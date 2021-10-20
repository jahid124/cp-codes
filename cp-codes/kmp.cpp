#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define MAX_N 100010
string T, P; // T = text, P = pattern
int b[MAX_N], n, m; // b = back table, n = length of T, m = length of P
void kmpPreprocess()   // call this before calling kmpSearch()
{
    int i = 0, j = -1;
    b[0] = -1; // starting values
    while (i < m)   // pre-process the pattern string P
    {
        while (j >= 0 && P[i] != P[j])
            j = b[j]; // different, reset j using b
        i++;
        j++; // if same, advance both pointers
        b[i] = j; // observe i = 8, 9, 10, 11, 12, 13 with j = 0, 1, 2, 3, 4, 5
    }
} // in the example of P = "SEVENTY SEVEN" above
void kmpSearch()   // this is similar as kmpPreprocess(), but on string T
{
    int i = 0, j = 0; // starting values
    while (i < n)   // search through string T
    {
        while (j >= 0 && T[i] != P[j])
            j = b[j]; // different, reset j using b
        i++;
        j++; // if same, advance both pointers
        if (j == m)   // a match found when j == m
        {
            printf("P is found at index %d in T\n", i - j);
            j = b[j]; // prepare j for the next possible match
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        cin.ignore();
        getline(cin,T);
        cin.ignore();
        getline(cin,P);
        kmpPreprocess();
        for(int i=0;i<P.size();i++)
            cout<<b[i]<<" ";
        cout<<'\n';
        kmpSearch();
    }
    return 0;
}
