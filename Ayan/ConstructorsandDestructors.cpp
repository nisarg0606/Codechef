#include<iostream>
using namespace std;

#define ll long long int
class Employee
{
    int id;
    string name;
    float salary;

public:
    Employee(int idpara, string namepara, float salarypara)
    {
        id = idpara;
        name = namepara;
        salary = salarypara;
    }
    void display()
    {
        cout << "The Employee id is : " << id << endl;
        cout << "The Employee name is : " << name << endl;
        cout << "The Employee salary is : " << salary << endl;
    }
};

class Add
{
public:
    Add()
    {
        cout << "Add constructor called" << endl;
    }
    Add(int a, int b)
    {
        cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
    }
};

int main()
{
    string name;
    int id;
    float salary;
    cout << "Enter the id of the Employee: ";
    cin >> id;
    cout << "Enter the name of the Employee: ";
    cin >> name;
    cout << "Enter the salary of the Employee: ";
    cin >> salary;
    Employee e(id, name, salary);
    e.display();

    // cout << "Enter the id of the Employee: ";
    // cin >> id;
    // cout << "Enter the name of the Employee: ";
    // cin >> name;
    // cout << "Enter the salary of the Employee: ";
    // cin >> salary;

    // Employee e1(id, name, salary);
    // e1.display();
    return 0;
}