#include <iostream> //input output stream

using namespace std;

class Test
{
    public:
    int x;
    Test (int i):x(i){}
    void func() const
    {
        cout<<"const function"<<endl;
    }
    void func()
    {
        cout<<"non const function"<<endl;
    }
};

int main()
{
    Test t();
    const Test t1();
    t.func();
    t1.func();
}