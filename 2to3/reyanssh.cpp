#include<iostream>

using namespace std;

class Person{
    public:
    // Person()
    // {
    //     cout<<"constructor"<<endl;
    // }
    Person(int x)
    {
        cout<<"Para"<<endl;
    }
    ~Person()
    {
        cout<<"Destructor"<<endl;
    }

};

int main()
{
    Person obj(6);
    return 0;
}