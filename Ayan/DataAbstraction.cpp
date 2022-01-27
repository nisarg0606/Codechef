#include <iostream>
#include <math.h>
using namespace std;

/*
    To achieve data abstraction, we need to define the interface of the class.
    The interface is defined by the public members of the class.
    How to achieve data Abstraction
    1. Abstration using class
    2. Abstract in Header File
*/

// int main()
// {
//     int n = 4;
//     int power = 3;
//     int result = pow(n, power); // achieved abstraction using header file

//     cout << "The result is: " << result << endl;
//     return 0;
// }

class Sum
{
private:
    int x, y, z;

public:
    void add()
    {
        cout << "Enter two numbers: ";
        cin >> x;
        cin >> y;
        z = x + y;
        cout << "The sum of two numbers is: " << z << endl;
    }
};

int main()
{
    Sum s;
    s.add();
    s.add();
    return 0;
}