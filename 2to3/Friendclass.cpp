#include <iostream>
using namespace std;

// forward declaration
class ClassB;
class ClassA {
    private:
        int numA;
        // friend class declaration
        friend class ClassB;
        friend int add();
    public:
        // constructor to initialize numA to 12
        ClassA() {
            numA = 12;
        }
};

class ClassB {
    private:
        int numB;
        friend int add();
    public:
        // constructor to initialize numB to 1
        ClassB() : numB(5) {}
    
    // member function to add numA
    // from ClassA and numB from ClassB
    
};
int add() {
        ClassA objectA;
        ClassB objectB;
        return objectA.numA + objectB.numB;
    }

int main() {
    ClassB objectB;
    cout << "Sum: " << add();
    return 0;
}