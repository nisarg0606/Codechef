#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, k, knum = 0;
        cin >> n >> x >> k;
        if (x % k == 0)
            cout << "yes" << endl;
        else if (((n + 1) - x) % k == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}