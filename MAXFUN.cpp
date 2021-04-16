#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, max, min;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        max = min = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (max < arr[i])
                max = arr[i];
            if (min > arr[i])
                min = arr[i];
        }
        ll ans = max - min;
        ans *= 2;
        cout << ans << endl;
    }
    return 0;
}