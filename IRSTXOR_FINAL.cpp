#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int solve()
{
    ll c, d = 0, mul, n = 0, arr[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 2147483648};
    cin >> c;
    do
    {
        n++;
    } while (arr[n] < c);
    // cout<<i<<endl;
    mul = arr[n] / 2;
    int a = 0, b = 0, max = 1, ans;
    for (int i = mul; i > 1; i--)
    {
        a = i;
        for (int j = mul; j < arr[n]; j++)
        {
            b = j;
            ll result = a ^ b;
            if (result == c)
            {
                cout << (a * b)<<endl;
                return a * b;
                // exit(0);
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    for (int i = 0; i < tt; ++i)
        solve();
    return 0;
}