#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, sum = 0;
        cin >> x >> y >> z;
        if (x + y == z)
        {
            cout << "YES\n";
            continue;
        }
        if (x + z == y)
        {
            cout << "YES\n";
            continue;
        }
        if (z + y == x)
        {
            cout << "YES\n";
            continue;
        }
        else
        {
            cout << "NO\n";
            continue;
        }
    }
    return 0;
}