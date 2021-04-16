#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll r, c, x;
        cin >> r >> c >> x;
        ll a[r][c], b[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> b[i][j];
            }
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << a[i][j] <<" ";
            }
            cout<<endl;
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << b[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
}