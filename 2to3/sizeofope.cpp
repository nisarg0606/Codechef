#include<iostream>
using namespace std;
int main()
{
    int a = 1;
    char b = 'a';
    float c = 1.0;
    double d = 1.0;
    long e = 1;
    string f = "hello";
    bool g = true;
    short h = 1;
    cout << "sizeof(a) = " << sizeof(a) << endl;
    cout << "sizeof(b) = " << sizeof(b) << endl;
    cout << "sizeof(c) = " << sizeof(c) << endl;
    cout << "sizeof(d) = " << sizeof(d) << endl;
    cout << "sizeof(e) = " << sizeof(e) << endl;
    cout << "sizeof(f) = " << sizeof(f) << endl;
    cout << "sizeof(g) = " << sizeof(g) << endl;
    cout << "sizeof(h) = " << sizeof(h) << endl;
    return 0;
}