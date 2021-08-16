#include<iostream>

using namespace std;

void change(int a)
{
    cout<<"Before adding value inside the function num "<<a<<endl;
    a+=100;
    cout<<"After adding value inside the function num "<<a<<endl;
}
int main()
{
    int x = 100;
    cout<<"Before function call: "<<x<<endl;
    change(x);
    cout<<"After function call: "<<x<<endl;
    return 0;
}


//armstrong number

//153 -> 1*1*1 + 5*5*5 + 3*3*3 = 153 
// 371 -> 3*3*3 + 7*7*7 + 1*1*1 = 371