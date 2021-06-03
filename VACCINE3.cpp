#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin >> t;
    int g, p;
    int a[11];
    while (t--)
    {
        cin >> g >> p;
        for (int i = 1; i <= 10; i++)
        {
            cin >> a[i];
        }
        int days = 0;
        for (int j = 10; j > g; j--)
        {
            days += a[j] / p;
            a[j - 1] += a[j] % p;
        }
        int minans = days + 1, maxans = days + (a[g] + p - 1) / p;
        cout << minans << " " << maxans << endl;
    }
}