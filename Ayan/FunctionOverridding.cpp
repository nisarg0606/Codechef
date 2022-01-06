#include <bits/stdc++.h>
using namespace std;

class A
{
    void privateMethod()
    {
        std::cout<<"This is the private method"<<std::endl;
    }
public:
    void display()
    {
        cout << "This is the display of a class";
    }
    void show()
    {
        cout<<"This is the show method of A class";
    }
    void ASpecial()
    {
        cout<<"This is A Special";
    }
};

class B : public A
{
public:
    void display()
    {
        cout << "This is the display of B class";
    }
    void show()
    {
        cout<<"This is the show method of B class";
    }
};

int main()
{
    B obj, obj1;
    obj.display();
    cout<<endl;
    obj1.A::display();// :: is scope Resolution Operator
    cout<<endl;
    obj1.A::display();
    cout<<endl;
    obj.A::show();
    cout<<endl;
    obj.show();

    cout<<endl;
    obj.ASpecial();

    // obj.A::privateMethod();

}