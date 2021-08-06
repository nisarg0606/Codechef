#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll d, D, p, q, ans, sum;
        cin >> D >> d >> p >> q;
        ll x = D / d;
        ll y = D % d;
        ll z = 1, c = 2;
        cout << D * p + (q * d * x * (x - z)) / c + q * x * y << endl;
    }
    return 0;
}
