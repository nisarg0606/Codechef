#include <iostream>
using namespace std;
class Person
{
public:
    Person(int x)
    {
        cout << "Person constructor called" << endl;
    }
    Person()
    {
        cout << "Default constructor of Person" << endl;
    }
    ~Person()
    {
        cout << "Person destructor called" << endl;
    }
};

class Faculty : virtual public Person
{
public:
    Faculty(int x) : Person(x)
    {
        cout << "Faculty constructor called" << endl;
    }
    Faculty()
    {
        cout << "Default constructor of Faculty" << endl;
    }
    ~Faculty()
    {
        cout << "Faculty destructor called" << endl;
    }
};

class Student : virtual public Person
{
public:
    Student(int x) : Person(x)
    {
        cout << "Student constructor called" << endl;
    }
    Student()
    {
        cout << "Default constructor of Student" << endl;
    }
    ~Student()
    {
        cout << "Student destructor called" << endl;
    }
};

class TA : public Faculty, public Student
{
public:
    TA(int x) : Student(x), Faculty(x), Person(x)
    {
        cout << "TA constructor called" << endl;
    }
    TA()
    {
        cout << "Default constructor of TA"<<endl;
    }
    ~TA()
    {
        cout << "TA destructor called" << endl;
    }
};

int main()
{
    TA ta1(20);
    // TA ta;
    return 0;
}