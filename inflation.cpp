#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll interest = 0 , inflation = 0;
        cin >> interest >> inflation;
        if((inflation * 2) > interest)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
