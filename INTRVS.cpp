#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll time = 0, nota = 0;
    bool slow = false, big = false;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == -1)
        {
            nota++;
        }
        else if (a[i] == 1)
        {
            time++;
        }
        else if (a[i] == 0)
        {
        }
        else
        {
            if (a[i] > k)
            {
                slow = true;
            }
            time += a[i];
            big = true;
        }

        if ((n - nota) < ceil(float(float(n) / float(2))))
            cout << "Rejected\n";
        else if (slow == true)
            cout << "Too Slow\n";
        else if (nota == 0 && big == false)
        {
            cout << "Bot\n";
        }
        else
            cout << "Accepted\n";
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        ll t;
        cin >> t;
        while (t--)
            solve();
    return 0;
}