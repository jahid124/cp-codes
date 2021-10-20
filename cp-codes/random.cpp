#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define cl CLOCKS_PER_SEC
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define flw freopen ("0output.txt","w",stdout)
#define flr freopen ("0input.txt","r",stdin)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); /// MUST ADD

int main()
{
    //flw;
    srand(time(0));
    int t,x=1;
    t=rand()%10+1;
    cout<<t<<endl;
    random_device rd;
    mt19937_64 eng(rd());
    uniform_int_distribution<unsigned long long> distr;
    while(t--)
    {


        cout << distr(eng)%10000000000000000+1 << ' '<<distr(eng)%10000000000000000+1<<endl;;

        // cout<<(ll)(llabs((ll)(pow(rand(),5)))%10000000000000000)+1<<" "<<llabs((ll)(pow(rand(),5))%10000000000000000)+1<<endl;
    }
    return 0;
}

