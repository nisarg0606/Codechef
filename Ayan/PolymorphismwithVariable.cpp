#include<bits/stdc++.h>
using namespace std;

#define ll long long int
class Animal{
    public:
    string s = "Animal";
};

class Dog:public Animal{
    public:
    string s = "Dog";
};

class Cat:public Animal{
    public:
    string s = "Cat";
};


int main()
{
    Animal *a;
    a = new Cat();
    cout<<a->s<<endl;
    Dog d;
    cout<<d.s<<endl;
    a = &d;
    cout<< a->s<<endl;

    Dog d1 = Dog();
    cout<<"This is using animal object and dog paramater "+d1.s<<endl;
    return 0;
}