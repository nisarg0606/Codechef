#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a1, a2, a3, a4;
        cin >> a1 >> a2 >> a3 >> a4;
        if (a1 == a2 && a1 == a3 && a1 == a4)
            cout << 0 << endl;
        else if (a1 != a2 && a1 != a3 && a1 != a4 && a2 != a3 && a2 != a4 && a3 != a4)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
        return 0;
}
