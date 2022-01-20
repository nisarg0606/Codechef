#include<bits/stdc++.h>
using namespace std;

#define ll long long int
class B;
class A
{
    public:
    int x = 5;
    friend class B;
};

class B
{
    public:
    void changea(A &a)
    {
        int ch;
        cout<<"Enter the value to change: ";
        cin>>ch;
        a.x = ch;
    }
    void display(A &a)
    {
        cout << "The value of x is: " << a.x << endl;
    }
};

// *p; &p;
int main()
{
    // int a;
    // int *p;

    // p = &a;
    // *p = 10;
    // cout<<a<<endl;
    A obj;
    B b;
    b.display(obj);
    obj.x = 10;
    b.display(obj);
    b.changea(obj);
    b.display(obj);
}