#include<iostream>

using namespace std;

typedef void (*fp)(int, int);

void Add(int a, int b)
{
    cout << "Add: " << a << " + " << b << " = " << a + b << endl;
}

void Sub(int a, int b)
{
    cout << "Sub: " << a << " - " << b << " = " << a - b << endl;
}

void Mul(int a, int b)
{
    cout << "Mul: " << a << " * " << b << " = " << a * b << endl;
}

void Div(int a, int b)
{
    cout << "Div: " << a << " / " << b << " = " << a / b << endl;
}

int main()
{
    fp a,s,m,d;
    a = &Add;
    a(4,5);
    s = &Sub;
    s(5,3);
    m = &Mul;
    m(4,5);
    d = &Div;
    d(4,2);
    // f = &Sub;
    return 0;
}