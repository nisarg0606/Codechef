#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll x, y;
        cin >> x >> y;
        ll a, b;
        cin >> a >> b;
        ll police, thief;
        thief = n - x + m - y;
        police = n - a + m - b - min(n - a, m - b);
        cout << ((thief <= police) ? "Yes\n" : "No\n");
    }
    return 0;
}