#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n>> k;
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;
        ll t1=0, t2=0;
        sort(a.begin(), a.end());
        while (k--)
        {
            t1 += a.back();
            a.pop_back();
            t2 += a.back();
            a.pop_back();
        }
        t2 += a.back();
        ll ans = max(t1, t2);
        cout << ans << endl;
    }
    return 0;
}