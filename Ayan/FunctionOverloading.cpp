#include<bits/stdc++.h>
using namespace std;

#define ll long long int
// void add(int a, int b)
// {
//     cout<<"The sum of a and b is : " <<   a + b <<endl;
// }
void add()
{
    cout<<"This is the add function"<<endl;
}
void add(int a, float b)
{

}
void add(float a, float b)
{
    cout<<"This is the function with both float data type";
}
void add(int a)
{
    cout<<"This is the function with only 1 parameter that is int";
}
int add(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    cout<<add(a, b)<<endl;
    add(a);
    cout<<endl;
    add(1.0f, 2.0f);
    cout<<endl;
    add();
    cout<<endl;
    return 0;
}
