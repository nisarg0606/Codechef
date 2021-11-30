#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    int i, j, k, l;
    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mini = *min_element(a.begin(), a.end());
    int ans = mini * n;
    for (i = 0; i < n; i++)
    {
        if (a[i] > mini)
            ans++;
    }
    cout << ans << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}