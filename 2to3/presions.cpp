#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"Precision set to 3 digits \n\n";
    cout.precision(3);
    cout.width(10);
    cout<< "VALUE";
    cout.width(15);
    cout<<"SQRT OF VALUE"<<endl;
    for(int n = 1; n <= 10; n++)
    {
        cout.width(10);
        cout<<n;
        cout.width(15);
        cout<<sqrt(n)<<endl;
    }
    cout<<"\nPrecision set to 5 digits \n\n";
    cout.precision(5);
    cout<< "sqrt(10) : "<< sqrt(10)<<endl;
    cout.precision(0);
    cout<<"\nPrecision set to default \n\n";
    cout<< "sqrt(10) : "<< sqrt(10)<<endl;
    return 0;
}

// int main()
// {
//     // float pi = 3.14159265358979323846264338327950288419716939937510;
//     float pi = 22.0/7.0;
//     cout<<"Value of PI:"<<endl;
//     // printf("Value of PI is %1.2f", pi);
//     for(int n = 1; n <= 10; n++)
//     {
//         cout.precision(n);
//         cout<<pi<<endl;
//     }
// }