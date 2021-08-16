#include<iostream>

using namespace std;

int factorial(int n);//prototype

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n)<<endl;
    return 0;
}

int factorial(int n)
{
    int result = 1;
    for(int i = 1; i <= n; i++)
        result *= i;//i is the loop variable
                    //result = result * i -> 1*1 = 1 -> 2*1 = 2 -> 2*2 = 4 -> 4*3 = 12 -> 12*4 = 24
    return result;
}