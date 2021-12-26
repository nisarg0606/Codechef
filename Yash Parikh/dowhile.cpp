#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    do
    {
        cout << i << endl;
        i++;
    } while (i < 0);// exit control loop
    // cout << i <<endl;
    cout << "Outside of while loop the value of i is "<< i <<endl;
    int j = 5;
    while ( j < 5)// entry control loop
    {
        cout << j <<endl;
        j++;
    }
    cout << "Outside of while loop the value of j is "<< j <<endl;
}