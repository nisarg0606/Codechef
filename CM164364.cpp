#include <bits/stdc++.h>
using namespace std;

#define ll long long int
void solve()
{
    ll n, x;
    cin >> n >> x;
    set<ll> st;
    for (ll i = 0; i < n; i++)
    {
        ll type;
        cin >> type;
        st.insert(type);
    }
    ll cnt = st.size();
    cout << min(n - x, cnt) << "\n";
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
