#include <iostream>
using namespace std;
class Person
{
public:
    Person(int x)//parametirized constructor
    {
        cout << "Person constructor called" << endl;
    }
    Person()//default constructor
    {
        cout << "Default constructor of Person" << endl;
    }
    ~Person()//destructor
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
        cout<<"Faculty Destructor Called"<<endl;
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
        cout<<"Student Destructor Called"<<endl;
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
        cout<<"TA Destructor Called"<<endl;
    }
};

int main()
{
    // TA ta1(20);
    TA ta;
    return 0;
}