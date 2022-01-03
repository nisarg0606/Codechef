#include <iostream>
using namespace std;

// class Bird
// {
// public:
//     void fly()
//     {
//         cout << "Bird is flying" << endl;
//     }
//     int a;
//     string b;
// };

class Box
{
    double length;
    double breadth;
    double height;

public:
    double setLength(double len)
    {
        length = len;
    }

    double getlength()
    {
        return length;
    }

    double setBreadth(double bre)
    {
        breadth = bre;
    }

    double getBreadth()
    {
        return breadth;
    }

    double setHeight(double hei)
    {
        height = hei;
    }

    double getHeight()
    {
        return height;
    }
    double getvolumeofbox()
    {
        return length * breadth * height;
    }
};

int main()
{
    // Bird obj;
    // obj.a = 5;
    // obj.b = "Hello";
    // obj.fly();
    // cout << obj.a << endl;
    // cout << obj.b << endl;

    Box b1;
    // b1.length = 10;
    // b1.breadth = 20;
    // b1.height = 30;
    b1.setLength(10);
    b1.setBreadth(20);
    b1.setHeight(30);
    // cout<<b1.getlength()<<endl;
    cout<<b1.getvolumeofbox()<<endl;
    // Box b2;
    // b2.length = 20;
    // b2.breadth = 30;
    // b2.height = 40;

    // double volume = b1.length * b1.breadth * b1.height;
    // cout << "Volume of box1 = " << volume << endl;

    // volume = b2.length * b2.breadth * b2.height;
    // cout << "Volume of box2 = " << volume << endl;
    return 0;
}