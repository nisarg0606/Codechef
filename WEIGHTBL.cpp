#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int w1, w2, x1, x2, m, diff = 0;
        cin >> w1 >> w2 >> x1 >> x2 >> m;
        diff = w2 - w1;
        int min = x1 * x2;
        int max = x2 * x2;
        if (diff >= min && diff <= max)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}