#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int *ptr;
    int marks[10];
    cout<<"Enter the marks of 10 students: ";
    for(int i=0; i<10; i++)
    {
        cin>>marks[i];
    }
    ptr = marks;
    cout<<"The value of *ptr is : "<<*ptr<<endl;
    cout<<"The address of *marks is : "<<marks<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<"The value of *ptr is : "<<*ptr<<endl;
        cout<<"The address of marks is : "<<ptr<<endl;
        ptr++;

    }
    return 0;
}