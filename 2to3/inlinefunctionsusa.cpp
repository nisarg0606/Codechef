#include <iostream>

using namespace std;

inline int add(int a, int b)
{
    return (a + b);
}

inline int sub(int a, int b)
{
    return (a - b);
}

inline int divf(int a, int b)
{
    return (a / b);
}

inline int mul(int a, int b)
{
    return (a * b);
}
inline int mod(int a, int b)
{
    return (a % b);
}

int main()
{
    int a, b;
    cout << "Enter the value of a & b: ";
    cin >> a >> b;
    cout << "The addition of a and b is : " << add(a, b) << endl;
    cout << "The substraction of a and b is : " << sub(a, b) << endl;
    cout << "The division of a and b is : " << divf(a, b) << endl;
    cout << "The multiplication of a and b is : " << mul(a, b) << endl;
    cout << "The modulo of a and b is : " << mod(a, b) << endl;
    return 0;
}