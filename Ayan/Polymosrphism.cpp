#include<bits/stdc++.h>
using namespace std;

#define ll long long int
class Animal
{
    public:
    virtual void speak()
    {
        cout<<"Animal Speaking"<<endl;
    }
};

class Dog:public Animal
{
    public:
    void speak()
    {
        cout<<"Dog Speaking"<<endl;
    }
};

int main()
{
    Animal *a=new Animal();
    Animal an;
    a->speak();
    Dog *d=new Dog();
    d->speak();
    return 0;
}