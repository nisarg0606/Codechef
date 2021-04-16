#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, d;
        cin >> n >> k >> d;
        vector<int> arr;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int no;
            cin >> no;
            arr.push_back(no);
            sum += arr[i];
        }
        if (sum < k)
        {
            cout << "0" << endl;
        }
        else if (sum >= k)
        {
            int ans = sum / k;
            if (ans > d)
            {
                cout << d << endl;
            }
            else
            {
                cout << ans << endl;
            }
        }
        arr.clear();
    }
    return 0;
}