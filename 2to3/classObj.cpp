#include<iostream>
// #include<conio.h>
using namespace std;
class Cars{
    public: //access specifiers -> public, private and protected
        int speed;
        int price;
        void Speed()
        {
            cout<<"The speed of the car is "<<speed<<endl;
        }
        void Price();     
};
void Cars::Price()      // :: -> This is known as scope resolution operator
{
    cout<<"The price of the car is "<<price<<endl;
}
int main()
{
    Cars c1;
    c1.price=100;
    c1.speed=200;
    c1.Speed();
    c1.Price();
    cout<<"price of the car: "<<c1.price<<endl;
    cout<<"speed of the car: "<<c1.speed<<endl;
    return 0;
}

/*

    Class methods:
        Methods are fuctions that belongs to the class
        There are 2 ways to declare a method
        1) inside the class
        2) outside the class 
*/

