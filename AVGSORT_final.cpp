#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 1; i < n; ++i)
    {
        if (a[i - 1] < a[i])
        {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    for (int i = 0; i < tt; ++i)
        solve();
    return 0;
}