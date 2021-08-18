#include<iostream>
using namespace std;

class Employee{
    int salary;
    public:
        void setSalary(int s){
            salary = s;
        }
        int getSalary(){
            return salary;
        }
};

int main(int argc, char const *argv[])
{
    //To learn what is encapulation
    Employee e1, e2;
    int e1scan, e2scan; 
    cout<<"Enter the salary of 1st employee: ";
    cin>>e1scan;
    e1.setSalary(100);
    e2.setSalary(200);
    cout<<"The salary of 1st employee : "<<e1.getSalary()<<endl;
    cout<<"The salary of 2nd employee: "<<e2.getSalary()<<endl;
    return 0;
}
