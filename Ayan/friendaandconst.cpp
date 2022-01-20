#include<bits/stdc++.h>
using namespace std;

class Avg
{
    float a, b;
    public:
    Avg(float i, float j)
    {
        a = i;
        b = j;
    }
    friend void doavg(Avg, Avg);
};
void doavg(Avg a, Avg b)
{
    cout<<"The avegare of a and b is:" << (a.a + b.b)/2 << endl;
}

int main()
{
    float a, b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    Avg obj1(a, b);
    doavg(obj1, obj1);
    return 0;
}