#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[1005][1005], b[1005][1005];
bool ans(ll a[1005][1005], ll b[1005][1005], ll r, ll c)
{
    ll i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] != b[i][j])
                return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t, r, c, x, i, j, k, diff = 0;
    cin >> t;
    while (t--)
    {
        cin >> r >> c >> x;
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                cin >> b[i][j];
            }
        }
        if (r < x && c < x)
        {
            if (ans(a, b, r, c))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else if (r < x)
        {
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < (c - x + 1); j++)
                {
                    if (a[i][j] == b[i][j])
                        continue;
                    else
                    {
                        diff = b[i][j] - a[i][j];
                        a[i][j] += diff;
                        k = 1;
                        while (k < x)
                        {
                            a[i][j + k] += diff;
                            k++;
                        }
                    }
                }
            }
            if (ans(a, b, r, c))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else if (c < x)
        {
            for (i = 0; i < c; i++)
            {
                for (j = 0; j < (r - x + 1); j++)
                {
                    if (a[j][i] == b[j][i])
                        continue;
                    else
                    {
                        diff = b[j][i] - a[j][i];
                        a[j][i] += diff;
                        k = 1;
                        while (k < x)
                        {
                            a[j + k][i] += diff;
                            k++;
                        }
                    }
                }
            }
            if (ans(a, b, r, c))
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else if (c >= x && r >= x)
        {
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < (c - x + 1); j++)
                {
                    if (a[i][j] == b[i][j])
                        continue;
                    else
                    {
                        diff = b[i][j] - a[i][j];
                        a[i][j] += diff;
                        k = 1;
                        while (k < x)
                        {
                            a[i][j + k] += diff;
                            k++;
                        }
                    }
                }
            }
            for (i = 0; i < c; i++)
            {
                for (j = 0; j < (r - x + 1); j++)
                {
                    if (a[j][i] == b[j][i])
                        continue;
                    else
                    {
                        diff = b[j][i] - a[j][i];
                        a[j][i] += diff;
                        k = 1;
                        while (k < x)
                        {
                            a[j + k][i] += diff;
                            k++;
                        }
                    }
                }
            }
            if (ans(a, b, r, c))
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}