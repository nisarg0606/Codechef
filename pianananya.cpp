#include<iostream>

using namespace std;

int main()
{
    float pi = 22.0/7.0;
    int i;
    cout<<"Value of pi is: "<<endl;
    for(i = 0; i < 10; i++)
    {
        // cout.width(i+1);
        cout.precision(i);
        cout<<pi<<endl;
    }
}