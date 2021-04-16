#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)

int main()
{
    fastio;
    int tests;
    cin >> tests;
    while (tests--)
    {
        long long int t, y, x;
        cin >> t >> y >> x;
        if (t >= y)
            cout << x * y << endl;
        else
            cout << 1 + x * t << endl;
    }
    return 0;
}