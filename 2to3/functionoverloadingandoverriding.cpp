/*
    Author: Nisarg Shah
    Topic: Function overloading and overriding
    DOC: 13-06-2021
*/
#include <iostream>
using namespace std;
int add()
{
    cout << "Addition function called" << endl;
    return 0;
}
int add(int i)
{
    return i + 1;
}

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

class A{
public:
    int add(int a, int b){
        return a + b;
    }
};
class B: public A{
public:
    int add(int a, int b){
        return a + b;
    }
};

int main()
{
    A a;
    B b;
    cout<<a.add(4,5)<<endl;
    cout<<b.add(4,5)<<endl;
    cout<<add()<<endl;
    cout << add(1) << endl;
    cout << add(1, 2) << endl;
    cout << add(1, 2, 3) << endl;
    return 0;
}