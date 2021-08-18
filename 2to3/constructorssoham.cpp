//what is constructor?
/* It is a special type of method which is executed when an object is created.
It is used to initialize the object.
*//*
    Name: Nisarg Shah   
    Topic: Constructors
    Date: 14-08-2021
*/
#include<iostream>
using namespace std;
class Soham{
    int a;
    public:
        Soham(){
            cout<<"Constructor is called"<<endl;
        }
        Soham(int aa){
            a = aa;
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    Soham s;//default constructor
    Soham s1(10);//constructor with parameter
    return 0;
}