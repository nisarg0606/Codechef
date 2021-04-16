#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, a3;
        int b1, b2, b3;
        int c, d;
        cin >> d >> c;
        cin >> a1 >> a2 >> a3;
        cin >> b1 >> b2 >> b3;
        int total = 0;
        if (a1 + a2 + a3 >= 150 || b1 + b2 + b3 >= 150)
        {
            if (a1 + a2 + a3 >= 150 && b1 + b2 + b3 >= 150)
            {
                total = c - 2 * d;
            }
            else
            {
                total = c - d;
            }
        }
        else
            total = c;
        if (total < 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}