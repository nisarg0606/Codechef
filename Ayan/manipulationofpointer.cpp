#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    int a = 10;
    int *p, **ptr;
    p = &a;
    ptr = &p;
    cout<<"The value of a is: "<<*p<<endl;
    *p = *p + a;
    // ptr = ptr + 1;
    cout<<"The value of p is: "<<p<<endl;
    cout<<"The value of a is: "<<*ptr<<endl;
    cout<<"The revised value of a is: "<<a<<endl;
    return 0;
}