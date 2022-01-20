#include <bits/stdc++.h>
using namespace std;

#define ll long long int
class B;
class C;
class FriendFunction
{
    int a, b;
    friend class B;
};

class B
{
public:
    void set(FriendFunction f) // friendfunction f is a object here
    {
        f.a = 10;
        f.b = 20;
        cout << "The addition of a and b is: " << f.a + f.b << endl;
    }
};

class A
{
    int x;

public:
    void setdata(int i)
    {
        x = i;
    }
    friend void min(A, C);
};

class C{
    int y;
    public: 
    void setdata(int i)
    {
        y = i;
    }
    friend void min(A, C);
};

void min(A a, C c)
{
    if(a.x < c.y)
        cout << "A is smaller than C" << endl;
    else
        cout << "C is smaller than A" << endl;
}
int main()
{
    // B b;
    // FriendFunction f;
    // b.set(f);
    // // b.add(f);

    A a;
    C c;
    int avar, bvar;
    cout<<"Enter the value of a: ";
    cin>>avar;
    cout<<"Enter the value of b: ";
    cin>>bvar;
    a.setdata(avar);
    c.setdata(bvar);
    min(a, c);
    return 0;
}