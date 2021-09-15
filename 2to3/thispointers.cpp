#include<iostream>

using namespace std;

class Student{
    int id;
    string name;
    public:
    Student(int id, string name){
        this->id = id;
        this->name = name;
    }
    void display(){
        cout<<"Id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

int main()
{
    Student s1(1, "Sachin");
    Student s2(2, "Dhoni");
    Student s3(3, "Virat");
    return 0;
}