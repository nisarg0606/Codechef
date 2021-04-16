#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll r, c, x;
        cin >> r >> c >> x;
        ll m1[r][c], m2[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> m1[i][j];
            }
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> m2[i][j];
            }
        }
        if(r < x && c < x)
        {
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    if (m1[i][j] == m2[i][j])
                    {
                        continue;
                    }
                    else
                    {
                        cout<<"No"<<endl;
                        exit(0);
                    }                    
                }
            }
        }
        else if (c < x)
        {
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < r - x + 1; j++)
                {
                    if (m1[j][i] != m2[j][i])
                    {
                        int diff = m2[j][i] - m1[j][i];
                        for (int k = j; k < j + x; j++)
                        {
                            m1[k][i] += diff;
                        }
                    }
                    if (j == r - x)
                    {
                        for (int k = r - x + 1; k < r; k++)
                        {
                            if (m1[k][i] != m2[k][i])
                            {
                                return false;
                            }
                        }
                    }
                }
            }
            return true;
        }
    }
    return 0;
}
