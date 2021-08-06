// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define FAST                      \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// // int main(int argc, char const *argv[])
// // {
// //     ll t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         ll n;
// //         cin >> n;
// //         vector<int> a;
// //         int min, max, temp;
// //         for (int i = 0; i < n; i++)
// //         {
// //             cin >> temp;
// //             a.push_back(temp);
// //         }
// //         min = *min_element(a.begin(), a.end());
// //         max = *max_element(a.begin(), a.end());
// //         replace(a.begin(), a.end(), max, min);
// //         int sum = 0;
// //         for (int i = 0; i < n; i++)
// //         {
// //             res =
// //                 sum += (a[i] / min);
// //         }
// //         cout << sum << endl;
// //     }
// //     return 0;
// // }
// int main(int argc, char const *argv[])
// {
//     FAST
//     int t;
//     cin>>t;
//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i = 0; i<n; i++)
//         {
//             cin>>arr[i];
//         }
//         sort(arr, arr+n);
//         arr[n-1]=arr[0];
//         int result = 0;
//         for(int i =0; i<n-1; i++)
//         {
//             result = __gcd(result, arr[i]);
//         }
//         int sum = 0;
//         for(int i =0; i < n; i++)
//         {
//             sum += arr[i]/(result);
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define Loop(z, n) for (long long int i = z; i < n; i++)
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define TestC(t)     \
    long long int t; \
    cin >> t;        \
    while (t--)
const int N = 1e6;
long long int originalArray[N];
long long int forwardgcd[N];
long long int backwardgcd[N];
void GcdCalculation(long long int n)
{
    forwardgcd[1] = originalArray[1];
    backwardgcd[n] = originalArray[n];

    for (long long int i = n - 1; i > 0; i--)
    {
        backwardgcd[i] = __gcd(backwardgcd[i + 1], originalArray[i]);
    }
    Loop(2, n + 1)
    {
        forwardgcd[i] = __gcd(forwardgcd[i - 1], originalArray[i]);
    }
}

int main()
{
    fastIO
        TestC(t)
    {
        long long int n;
        cin >> n;

        Loop(1, n + 1)
        {
            cin >> originalArray[i];
        }
        sort(originalArray, originalArray + n + 1);
        GcdCalculation(n);
        long long int SumOfElements = 0;
        Loop(1, n + 1)
        {
            SumOfElements += originalArray[i];
        }
        long long int mimimumNotes = LLONG_MAX;
        Loop(1, n + 1)
        {
            long long int tempValue = (SumOfElements - originalArray[i] + __gcd(forwardgcd[i - 1], backwardgcd[i + 1])) / __gcd(forwardgcd[i - 1], backwardgcd[i + 1]);
            if (tempValue < mimimumNotes)
                mimimumNotes = tempValue;
        }
        cout << mimimumNotes << endl;
    }
}