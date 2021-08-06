#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
#define mod 998244353

ll binpow(ll a, ll b)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b % 2)
            ans = (ans * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return ans;
}

signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << binpow(n, k) << endl;
    }
}