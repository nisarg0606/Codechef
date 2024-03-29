#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int b[m];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        int MAX = 1e9;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                mp[i] = 0;
            else if (a[i] != 0)
                mp[i] = 0;
            else
                mp[i] = MAX;
        }
        int right = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                right = i;
            if (right != -1)
            {
                if (a[i] == 0)
                    mp[i] = min(mp[i], i - right);
            }
        }
        int left = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 2)
                left = i;
            if (left != -1)
            {
                if (a[i] == 0)
                    mp[i] = min(mp[i], left - i);
            }
        }

        for (int i = 0; i < m; i++)
        {
            int j = b[i] - 1;
            if (mp[j] != MAX)
                cout << mp[j] << " ";
            else
                cout << -1 << " ";
        }
        cout << "\n";
    }
    return 0;
}