#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll m, h, ans;
        cin >> m >> h;
        ans = m / (h * h);
        if (ans <= 18)
            cout << 1 << endl;
        else if (ans > 18 && ans < 25)
            cout << 2 << endl;
        else if (ans > 24 && ans < 30)
            cout << 3 << endl;
        else
            cout << 4 << endl;
    }
    return 0;
}
