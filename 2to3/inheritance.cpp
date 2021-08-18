/*Types of Inheritance:
    1. Single Inheritance
    2. Multiple Inheritance
    3. Multilevel Inheritance
    4. Hybrid Inheritance
    5. Hierarchical Inheritance
*/
#include<iostream>
using namespace std;
class Animal{
    public:
    string name;
    string sound;
        Animal(){
            cout<<"This animal makes sound"<<endl;
    }
};

class Dog:public Animal{
    public:
    string breed = "husky";
        Dog(){
            cout<<"This dog is a breed of "<<breed<<endl;
        }
};

int main()
{
    Dog d;
    d.name="Rover";
    d.sound="Woof";
    d.breed="Lab";
    cout<<"Name of the dog is "<<d.name<<endl;
    cout<<"Sound of the dog is "<<d.sound<<endl;
    cout<<"Breed of the dog is "<<d.breed<<endl;
}