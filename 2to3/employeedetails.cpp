#include<iostream>

using namespace std;
class Employee{
    int age, salary;
    public:
        Employee(int a, int s){
            age = a;
            salary = s;
            cout<<"The age of th e employee is : "<<age<<endl;
            cout<<"The salary of the employee is : "<<salary<<endl;

        }
};
int main()
{
    Employee e1(30, 5000);
    Employee e2(25, 6000);
    Employee e3(20, 7000);
    Employee e4(18, 8000);
    return 0;
}