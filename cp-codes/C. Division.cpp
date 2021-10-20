#include <cstdio>
#include <iostream>
using namespace std;
typedef long long ll;
int T;
ll p, q, x;
int main()
{
    cin >> T;
    while (T--)
    {
        cin >> p >> q;
        if (p % q)
        {
            cout << p << endl;
            continue;
        }
        x = 0;
        for (int i = 1; i * i <= q; ++i)
            if ((q % i)==0)
            {
                if (i != 1)
                {
                    ll tmp = p;
                    while (!(tmp % q))
                        tmp /= i;
                    x = max(x, tmp);
                }
                ll tmp = p;
                while (!(tmp % q))
                    tmp /= q / i;
                x = max(x, tmp);
            }
        cout << x << endl;
    }
}
