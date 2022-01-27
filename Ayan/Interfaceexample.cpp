#include <bits/stdc++.h>
using namespace std;

class Shape
{
protected:
    float width;
    float height;

public:
    virtual float getArea() = 0;
    void setWidth(float w)
    {
        width = w;
    }
    void setHeight(float h)
    {
        height = h;
    }
};

class Rectangle : public Shape
{
public:
    float getArea()
    {
        return (width * height);
    }
};

class Triangle : public Shape
{
public:
    float getArea()
    {
        return (width * height) / 2;
    }
};

int main(int argc, char const *argv[])
{
    Rectangle Rect;
    Triangle Tri;

    Rect.setWidth(5);
    Rect.setHeight(7);

    cout << "The Area of Rectangle is: " << Rect.getArea() << endl;

    Tri.setWidth(5);
    Tri.setHeight(7);

    cout << "The Area of Triangle is: " << Tri.getArea() << endl;
    return 0;
}
