#include<iostream>
using namespace std;
void swapbyvalue(int a, int b);
void swap(int *, int *);
int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    swap(&a, &b);
    cout << "After swapping by call by reference: " << a << " " << b << endl;
    swapbyvalue(a, b);
    cout<<"After swapping by call by value: "<<a << " "<<b<<endl;
    return 0;
}
void swap(int *a, int *b){    
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<"The value of a is in call by Reference function: "<<*a<<endl;
    cout<<"The value of b is in call by Reference function: "<<*b<<endl;}
void swapbyvalue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"The value of a is in call by value function: "<<a<<endl;
    cout<<"The value of b is in call by value function: "<<b<<endl;}