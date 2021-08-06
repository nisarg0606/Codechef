#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    ll arr[n], vis[n];
    ll ct = 0, pos = -1;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= 7)
            ct++;
        if (ct == 7)
        {
            pos = i + 1;
            ct++;
        }
    }
    cout << pos << endl;
}
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}