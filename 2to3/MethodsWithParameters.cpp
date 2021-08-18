#include <iostream>

using namespace std;

class Myclass
{
public:
    int a, b;
    int add(int x, int y) //methods with parameters
    {
        return x + y;
    }
    int sub(int x, int y)
    {
        return x - y;
    }
};

int main()
{
    Myclass myobj;
    cout<<"The addition of 2 numbers is: "<<myobj.add(20, 30)<<endl;
    cout<<"The subtraction of 2 numbers is: "<<myobj.sub(30, 20)<<endl;
    return 0;
}
