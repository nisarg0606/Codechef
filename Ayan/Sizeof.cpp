#include<bits/stdc++.h>
using namespace std;

#define ll long long int
struct stex{
    int a;
    float b;
    char c;
} s1;

union unex{
    int a;
    float b;
    char c;
} u1;

int main()
{
    int a; //8
    float b; // 8
    char c;// 4
    double d; // ?
    long f; // ?
    string s;// ?
    bool b1;// ?

    cout<<"Size of int is : "<<sizeof(a)<<endl;
    cout<<"Size of float is : "<<sizeof(b)<<endl;
    cout<<"Size of char is : "<<sizeof(c)<<endl;
    cout<<"Size of double is : "<<sizeof(d)<<endl;
    cout<<"Size of long is : "<<sizeof(f)<<endl;
    cout<<"Size of string is : "<<sizeof(s)<<endl;
    cout<<"Size of bool is : "<<sizeof(b1)<<endl;
    cout<<"Size of Struct is : "<<sizeof(s1)<<endl;
    cout<<"Size of Union is : "<<sizeof(u1)<<endl;
}