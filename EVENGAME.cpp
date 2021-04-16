#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        int sum_odd = 0, sum_even = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] % 2 == 0)
                sum_even += nums[i];
            else
                sum_odd += nums[i];
        }
        if(sum_odd > sum_even)
        {
            sum = sum_odd - sum_even;
        }
        else
        {
            sum = sum_even - sum_odd;
        }
        if(sum % 2 == 0)
            cout<<"1"<<endl;
        else
            cout<<"2"<<endl;
    }
    return 0;
}
