#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int a[n], max, count = 0;
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        max = a[0];
        for (ll i = 0; i < n; i++)
        {
            if (a[i] <= max)
            {
                count++;
                max = a[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}