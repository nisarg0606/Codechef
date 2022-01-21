#include<bits/stdc++.h>
using namespace std;

#define ll long long int
class Person{
    public:
    Person()
    {
        cout<<"Person constructor called"<<endl;
    }
    ~Person()
    {
        cout<<"Person destructor called"<<endl;
    }
};

class Student : public Person
{
    public:
    Student()
    {
        cout<<"Student constructor called"<<endl;
    }
    ~Student()
    {
        cout<<"Student destructor called"<<endl;
    }
};

class Faculty : virtual public Person{ 
    public:
    Faculty()
    {
        cout<<"Faculty constructor called"<<endl;
    }
    ~Faculty()
    {
        cout<<"Faculty destructor called"<<endl;
    }
};

class Royal: public Faculty, public Student{
    public:
    Royal(){
        cout<<"Royal constructor called"<<endl;
    }
};

int main()
{
    Royal r;
    return 0;
}