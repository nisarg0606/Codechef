#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll s = 0, m = 1;
        while (n >= s)
        {
            s = pow(2, m);
            m++;
        }
        ll a = pow(2, m - 2) - 1;
        ll sum = s - n;
        ll ans = a * (a + sum);
        cout << ans << endl;
    }
    return 0;
}