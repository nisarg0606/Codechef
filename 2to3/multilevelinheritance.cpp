#include<iostream>
using namespace std;

class A{
	public: //acess specifiers
	int a;
};

class B{
	public:
	int b;
};

class C{
	public:
	int c;
};

class D: public A, public B, public C{
	public:
	int d;
};

int main()
{
	D d;
	d.a = 10;
	d.b = 20;
	d.c = 30;
    d.d = 40;
    cout<< "The value of A is: "<<d.a<<endl;
    cout<< "The value of B is: "<<d.b<<endl;
    cout<< "The value of C is: "<<d.c<<endl;
    cout<< "The value of D is: "<<d.d<<endl;
	return 0;
}