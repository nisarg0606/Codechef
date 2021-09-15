#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Precision set to 3 digits\n\n";
    cout.precision(3);
    cout.width(10);
    cout<<"VALUE";
    cout.width(15);
    cout<<"SQRT OF VALUE"<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout.width(8);
        cout<<i;
        cout.width(13);
        cout<<sqrt(i)<<endl;
    }
    cout<<"Presion set to 5 digits"<<endl;
    cout.precision(5);
    cout << sqrt(10);
}