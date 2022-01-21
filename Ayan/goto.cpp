#include<iostream>
using namespace std;

int main()
{
    ineligible://label
        cout<<"You are not eligible to vote"<<endl;
        cout<<"Enter your age: ";
        int age;
        cin>>age;
        if(age>=18)
        {
            cout<<"You are eligible to vote"<<endl;
        }
        else
        {
            goto ineligible;//goto label
        }
}

// 3 subjects marks
// if any marks is less than 33 then print "fail" and goto start