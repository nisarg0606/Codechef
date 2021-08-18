// program to find largest and second largest number in an array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Ente the value of n: ";
    cin >> n;
    int a[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int largest = 0, second_largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest){
            second_largest = largest;
            largest = a[i];
        }else if (a[i] > second_largest && a[i] != largest){
            second_largest = a[i];
        }
    }
    cout << "The largest element is :" << largest << " The second largest element is : " << second_largest << endl;
    return 0;
}

class emp{
    int age, salary;
    emp()
    {
        age =   
        salary =
        cour<<age
        cout<<salary 
    }
}

main ()
{
    emp em;
}
//make a class called employees(int age, int salary)
//make a constructor
//initilize salary and age as private variable
//pass paramters to the constructor
//make main method and call salary and name