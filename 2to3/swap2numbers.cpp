/*
    Find the largest and 2nd largest number in an array of 5 numbers.
*/
#include<iostream>

using namespace std;

int main()
{
    int a, b;
    cout<<"Enter two numbers: ";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping: " << a << " " << b << endl;
}