#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll d, x, y, z;
        cin >> d >> x >> y >> z;
        int first = 7 * x;
        int second = (y * d) + (z * (7 - d));
        cout<<max(first, second)<<endl;   
    }
    return 0;
}
