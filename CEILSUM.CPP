#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

void solve() {
	int A, B; cin >> A >> B;
	int ans = 0;
	if (A < B)
		ans = (B - A) / 2 + 1;
	else if (A > B) {
		if ((A - B) % 2)
			ans = (B - A) / 2;
		else
			ans = (B - A) / 2 + 1;
	}
	cout << ans << '\n';
}

signed main() {
	fast;

// #ifndef ONLINE_JUDGE
	// freopen("in.txt", "r", stdin);
	// freopen("out.txt", "w", stdout);
// #endif

	int t = 1;
	cin >> t;
	for (int tt = 1; tt <= t; tt++) {
		// cout << "Case #" << tt << ": ";
		solve();
	}
	return 0;
}