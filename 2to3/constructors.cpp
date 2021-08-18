#include<iostream>

using namespace std;

class code{
    int id;
    public:
    code(){
        cout<<"This is default constructor"<<endl;
    }
    code(int id){
        this->id = id;
        cout<<"This is parameterized constructor"<<endl;
    }
    code(code &c){
        this->id = c.id;
        cout<<"This is copy constructor"<<endl;
        cout<<"id = "<<c.id<<endl;
    }
    void display()
    {
        cout<<"id = "<<id<<endl;
    }
};

int main()
{
    code c1(1);
    code c2(c1);//copy constructor called
    code C = c1;    //copy constructor called

    code D;
    D = c1;  //copy constructor not called

    cout<<"\nId of C1 is: ";
    c1.display();
    cout<<"\nId of c2 is: ";
    c2.display();
    cout<<"\nId of C is: ";
    C.display();
    cout<<"\nId of D is: ";
    D.display();
}

/*
why do we use copy constructor??
1. initlize an object from another object to same object
2. copy an object to pass it as an argument to a function
3. copy to an object to return from a function
*/