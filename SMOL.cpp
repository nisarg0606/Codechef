#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n >= k)
        {
            while (n >= 0)
            {
                n = n - k;
            }
        }
        if (n < 0)
            n = n + k;
        cout << n << endl;
    }
    return 0;
}