#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> p(k);
        for (ll i = 0; i < k; i++)
            cin >> p[i];

        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            ll sum = 0;
            for (ll j = 0; j < k; j++)
                sum += (s[j] - '0') * p[j];

            cout << sum << '\n';
        }
    }
}