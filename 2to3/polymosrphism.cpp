#include<iostream>
using namespace std;

class Animal{
    public:
    void sound(){
        cout<<"Animal sound"<<endl;
    }
};

class Dog:public Animal{
    public:
    void sound(){
        cout<<"The animal makes sound bhaw bhaw"<<endl;
    }
};

class Pig:public Animal{
    public:
    void sound(){
        cout<<"The animal makes sound oink oink"<<endl;
    }
};

int main()
{
    Animal ani;
    Dog dog;
    Pig pig;
    ani.sound();
    dog.sound();
    pig.sound();
    return 0;
}