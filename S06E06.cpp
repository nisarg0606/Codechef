#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int pro = 1;
        vector<int> v;
        while (n > 0)
        {
            v.push_back(n % 10);
            n = n / 10;
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < k; i++)
        {
            if (v[0] == 9)
            {
                continue;
            }
            else
            {

                v[0] += 1;
            }
            sort(v.begin(), v.end());
        }
        for (int i = 0; i < v.size(); i++)
        {
            pro *= v[i];
        }
        cout << pro << endl;
    }
    return 0;
}