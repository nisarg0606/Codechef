#include <iostream>
using namespace std;

class Father
{
public:
    void caroffather()
    {
        cout << "I am a car of Father" << endl;
    }
    void Houseoffather()
    {
        cout << "This is father's house" << endl;
    }
};

class Mother
{
public:
    void carofmother()
    {
        cout << "I am a car of Mother" << endl;
    }
    void Houseofmother()
    {
        cout << "This is mother's house" << endl;
    }
};

class son : public Father, public Mother
{//multiple inheritance
public:
    void car()
    {
        cout << "I am a car of Son" << endl;
    }
    void House()
    {
        cout << "This is son's house" << endl;
    }
};
class B : public Father
{ // Single Inheritance
public:
    void carofson()
    {
        cout << "I am a car of Son" << endl;
    }
    void Houseofson()
    {
        cout << "This is son's house" << endl;
    }
};

class C : public Father
{ // hierachical inheritance
public:
    void carofdaughter()
    {
        cout << "I am a car of Daughter" << endl;
    }
    void Houseofdaughter()
    {
        cout << "This is daughter's house" << endl;
    }
};

class D : public B
{ // multilevel inheritance
public:
    void servant()
    {
        cout << "I am a servant of Father" << endl;
    }
};
int main()
{
    B obj;
    // obj.car();
    // obj.House();
    obj.carofson();
    obj.Houseofson();
    C obj1;
    // obj1.car();
    // obj1.House();
    obj1.carofdaughter();
    obj1.Houseofdaughter();
    // obj1.carofson();

    D obj2;
    // obj2.car();
    // obj2.House();
    obj2.carofson();
    obj2.Houseofson();
    obj2.servant();


    son obj3;
    obj3.car();
    obj3.House();
    obj3.car();
    obj3.Houseoffather();
    obj3.caroffather();
    obj3.Houseofmother();
    obj3.carofmother();

    return 0;
}