#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &i : a)
        {
            cin >> i;
        }
        vector<int> nbit(31);
        int c, t1;
        for (int j = 0; j <= 30; j++)
        {
            c = 0;
            for (int &i : a)
            {
                if (i % 2 != 0)
                    c++;
                i /= 2;
            }
            nbit[j] = c;
        }
        int ans = 0;
        for (int j = 0; j <= 30; j++)
        {
            if (nbit[j] % k == 0)
            {
                ans += nbit[j] / k;
            }
            else
            {
                ans += nbit[j] / k + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
