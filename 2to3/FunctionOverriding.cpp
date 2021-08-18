#include<iostream>

using namespace std;

class A {
    public:
        void print() {
            cout << "A Print" << endl;
        }
        void show() {
            cout << "A Show" << endl;
        }
};

class B : public A {
    public:
        void printB() {
            cout << "B Print" << endl;
        }
        void showB() {
            cout << "B Show" << endl;
        }
};

main() {
    B b;
    b.print();
    b.show();
    b.printB();
    b.showB();
}