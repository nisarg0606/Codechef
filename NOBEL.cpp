#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, m;
    cin >> n >> m;
    set<int> s1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s1.insert(x);
    }
    if (s1.size() == m)
        cout << "NO"<<endl;
    else
        cout << "YES"<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}