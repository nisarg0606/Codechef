#include <iostream>
using namespace std;

class VolumeofBox
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
    VolumeofBox obj;
    obj.setLength(5);
    obj.setBreadth(5);
    obj.setHeight(5);
    cout << "Volume of Box is " << obj.getvolumeofbox() << endl;
    return 0;
}