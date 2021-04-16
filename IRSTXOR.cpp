// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long ll
// ll main(ll argc, char const *argv[])
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ios_base::sync_with_stdio(false);
//         cin.tie(NULL);
//         ll c, d = 0, mul;
//         cin >> c;
//         do
//         {
//             d++;
//             mul = pow(2, d);
//         } while (mul < c);
//         ll a = 0, b = 0;
//         vector<ll> ans;
//         for (ll i = 1; i < mul; i++)
//         {
//             a = i;
//             for (ll j = 1; j < mul; j++)
//             {
//                 b = j;
//                 ll result = a ^ b;
//                 if (result == c)
//                 {
//                     ans.push_back(a * b);
//                 }1
//             }
//         }
//         cout << *max_element(ans.begin(), ans.end()) << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    double c, d = 0, mul;
    cin >> c;
    do
    {
        d++;
        mul = pow(2, d);
    } while (mul < c);
    ll a = 0, b = 0, max = 1;
    vector<ll> ans;
    for (ll i = mul; i > 1; i--)
    {
        a = i;
        for (ll j = mul; j > i; j--)
        {
            b = j;
            ll result = a ^ b;
            if (result == c)
            {
                // ans.push_back(a * b);
                if (max < a * b)
                {
                    max = (a*b);
                    cout << "A: " << a << " B: " << b << endl;
                }
            }
        }
    }
    // cout << *max_element(ans.begin(), ans.end()) << "\n";
    cout<<"Max: "<<max<<endl;
    cout<<"Mul: "<<mul<<endl;
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt;
    cin >> tt;
    for (ll i = 0; i < tt; ++i)
        solve();
    return 0;
}