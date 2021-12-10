#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    int choice = 1;
    while (choice)
    {
        cout << "Enter what you want to perform: ";
        cout << "\nEnter 1 for addition" << endl;
        cout << "Enter 2 for substraction" << endl;
        cout << "Enter 3 for multiplication" << endl;
        cout << "Enter 4 for division" << endl;
        cout << "Enter 5 for Modulos" << endl;
        cout << "Enter 0 for exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "The addition of A and B is " << a + b << endl;
            break;
        case 2:
            cout << "The Subtraction of A and B is " << a - b << endl;
            break;
        case 3:
            cout << "The Multiplication of A and B is " << a * b << endl;
            break;
        case 4:
            cout << "The Division of A and B is " << a / b << endl;
            break;
        case 5:
            cout << "The Modulu of A and B is " << a % b << endl;
            break;
        case 0:
            cout << "Visit Again....";
            break;
        default:
            cout << "Enter a valid choice....";
            break;
        }
    }
    return 0;
}