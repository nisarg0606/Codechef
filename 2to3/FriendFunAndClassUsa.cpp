#include<iostream>
using namespace std;
// class MathsFun{
//     int a, b;
//     public:
//         MathsFun()
//         {
//             a = 10;
//             b = 7;
//         }
//         friend float mean(MathsFun M);
// };
// float mean(MathsFun M)
// {
//     return float(M.a + M.b)/2.0;
// }
// int main()
// {
//     MathsFun m;
//     cout<<"The mean value is : "<<mean(m)<<endl;
//     return 0;
// }

class ABC; //forward Declaration // prototype
// void add(int x, int y);
class XYZ
{
    int data;
    public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(XYZ, ABC);
};
class ABC{
    int data;
    public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(XYZ, ABC);
};
void add(XYZ obj1, ABC obj2)
{
    cout<<"The sum of obj1 and obj2 is: "<<obj1.data + obj2.data;
}
int main()
{
    ABC X;
    XYZ Y;
    X.setvalue(30);
    Y.setvalue(30);
    add(X, Y);
    return 0;
}