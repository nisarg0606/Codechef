#include<iostream>
using namespace std;

inline int add(int a, int b)
{
    return (a + b);
}

inline int sub(int a, int b)
{
    return (a - b);
}

int main()
{
    int x, y;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    cout<<"The addition of x and y is : "<<add(x, y)<<endl;
    cout<<"The substraction of x and y is : "<<sub(x, y)<<endl;
}