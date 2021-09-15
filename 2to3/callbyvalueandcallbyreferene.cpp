#include<iostream>
using namespace std;
void swapvalue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"The value of a in swap func "<<a<<endl;
    cout<<"The value of b in swap func "<<b<<endl;
}

void swapreference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout<<"The value of a in swap func call by ref: "<<*a<<endl;
    cout<<"The value of b in swap func call by ref: "<<*b<<endl;
}
int main()
{
    int x, y;
    cout<<"Enter the value of a: ";
    cin>>x;
    cout<<"Enter the value of b: ";
    cin>>y;
    swapvalue(x, y);
    cout<<"The value of a in main func "<<x<<endl;
    cout<<"The value of b in main func "<<y<<endl;
    swapreference(&x, &y);
    cout<<"The value of a in main func "<<x<<endl;
    cout<<"The value of b in main func "<<y<<endl;
    return 0;
}