#include<iostream>

using namespace std;

class Box{
    int len;
    int width;
    public:
    Box(int len, int width){
        cout<<"Box constructor"<<endl;
        this->len = len;
        this->width = width;
    }
    friend int print(Box b);
};

int print(Box b){
    b.len += 10;//b.len = b.len + 10;
    b.width += 10;//b.width = b.width + 10;
    cout<<"len = "<<b.len<<", width = "<<b.width<<endl;
    return 0;
}

int main()
{
    Box b(10, 20);
    print(b);
    return 0;
}