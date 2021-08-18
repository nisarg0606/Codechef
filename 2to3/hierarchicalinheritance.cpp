#include<iostream>
using namespace std;
class Student{
    int rno;
    string name;
    int age;
    public:
        Student(int rno,string name,int age):rno(rno),name(name),age(age){}
        void display(){
            cout<<"Student Details are :"<<endl;
            cout<<"Roll No : "<<rno<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
        }
};
class Arts: public Student{
    string stream;
    public:
        Arts(int rno,string name,int age,string stream):Student(rno,name,age),stream(stream){}
        void display(){
            Student::display();
            cout<<"Stream : "<<stream<<endl;
        }
};
class Science: public Student{
    string stream;
    public:
        Science(int rno,string name,int age,string stream):Student(rno,name,age),stream(stream){}
        void display(){
            Student::display();
            cout<<"Stream : "<<stream<<endl;
        }
};

int main()
{
    Student s1(101,"Ravi",20);
    s1.display();
    Arts a1(102,"Neev",20,"Arts");
    a1.display();
    Science s2(103,"Ananyya",20,"Science");
    s2.display();
    return 0;
}