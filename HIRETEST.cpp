#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int Y;
    cin >> Y;
    while (Y--)
    {
        int n, m, x, y;
        cin >> n >> m;
        cin >> x >> y;
        char p[n][m];
        for (int i = 0; i < n; i++)
        {
            int countf = 0, countp = 0;
            for (int j = 0; j < m; j++)
            {
                cin >> p[i][j];
                if (p[i][j] == 'F')
                    countf++;
                else if (p[i][j] == 'P')
                    countp++;
            }
            if (countf >= x || (countf == x - 1 && countp >= y))
                cout << 1;
            else
                cout << 0;
            if (i == n - 1)
                cout << endl;
        }
    }
    return 0;
}