#include <iostream>

using namespace std;

void swap(int a, int b)// call by value
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    // cout << "The value of a is " << a << endl;
    // cout << "The value of b is " << b << endl;
}


void swapadd(int *a ,int *b)//call by reference
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    // cout << "The value of a is " << *a << endl;
    // cout << "The value of b is " << *b << endl;
}
int main()
{
    int a;
    int b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    swap(a, b);

    cout << "After the swap funtion the value of a is: " << a << endl;
    cout << "After the swap funtion the value of b is: " << b << endl;

    swapadd(&a, &b);
    cout << "After the swapadd funtion the value of a is: " << a << endl;
    cout << "After the swapadd funtion the value of b is: " << b << endl;
    return 0;
}