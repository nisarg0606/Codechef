#include <iostream>
using namespace std;
int main()
{
    int n, reverse = 0, temp;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) // 123 -> 6
    {
        temp = n % 10;
        reverse = reverse*10 + temp;
        n = n / 10;
    }
    cout << "reverse is = " << reverse << endl;
    return 0;
}