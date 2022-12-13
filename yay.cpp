// create a program that sorts an array of 10 numbers
// using the bubble sort algorithm

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[10];
//     int temp;
//     for (int i = 0; i < 10; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


// // print hello yesha 10 times

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         cout << "hello yesha" << endl;
//     }
//     return 0;
// }



// sum of first n natural numbers

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;
    return 0;
}