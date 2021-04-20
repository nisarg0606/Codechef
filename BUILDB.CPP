#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, r;
        cin >> n >> r;
        ll a[n], b[n], i;
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
            cin >> b[i];
        ll ans = 0;
        ll res = 0;
        for (i = 0; i < n; i++)
        {
            ans += b[i];
            res = max(res, ans);
            if (i != n - 1)
                ans -= r * (a[i + 1] - a[i]);
            if (ans < 0)
                ans = 0;
        }
        cout << res << "\n";
    }
    return 0;
}
