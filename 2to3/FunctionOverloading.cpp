#include<iostream>
/* How many types of datatypes in c++?
int 
float
char
double
long
short
boolean
string
*/
using namespace std; 
class Polymorphism {
    public:
        void function(int x)
        {
            cout<<"The value of X is : "<<x<<endl;
        }
        void function(double x)
        {
            cout<<"The value of X is : "<<x<<endl;
        }
        void function(char x)
        {
            cout<<"The value of X is : "<<x<<endl;
        }
        void function(int x, int y)
        {
            cout<<"The value of X is : "<<x<<endl;
            cout<<"The value of Y is : "<<y<<endl;
        }
};
int main()
{
    //polymorphism PART 1 compile time polymorphism -> Function Overloading
    //function overloading
    Polymorphism obj;
    obj.function(10);
    obj.function(220.0);
    obj.function('a');
    obj.function(100,200);
    return 0;
}