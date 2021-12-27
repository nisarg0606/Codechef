#include<iostream>
using namespace std;

class A
{
    public:
    void car()
    {
        cout << "I am a car of Father" << endl;
    }
    void House()
    {
        cout<<"This is father's house"<<endl;
    }
};

class B: public A{          //Single Inheritance
    public:
    void carofson()
    {
        cout << "I am a car of Son" << endl;
    }
    void Houseofson()
    {
        cout<<"This is son's house"<<endl;
    }
};

class C: public A{ // multiple inheritance
    public:
    void carofdaughter()
    {
        cout << "I am a car of Daughter" << endl;
    }
    void Houseofdaughter()
    {
        cout<<"This is daughter's house"<<endl;
    }
};

class D: public B{ //multilevel inheritance
    public:
    void servant()
    {
        cout << "I am a servant of Father" << endl;
    }
};
int main()
{
    B obj;
    obj.car();
    obj.House();
    obj.carofson();
    obj.Houseofson();
    C obj1;
    obj1.car();
    obj1.House();
    obj1.carofdaughter();
    obj1.Houseofdaughter();
    // obj1.carofson();

    D obj2;
    obj2.car();
    obj2.House();
    obj2.carofson();
    obj2.Houseofson();
    obj2.servant();

    return 0;
}