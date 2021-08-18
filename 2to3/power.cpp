#include<iostream>

using namespace std;

int Pow(int x, int y)
{
    int power = 1;
    while(y>0)//2 ^ 4
    {
        power = power * x;
        y--;
    }
    return power;
}

int main()
{
    int p,e;
    cout<<"Please enter the value of p and e: ";
    cin>>p>>e;
    cout<<"The power of "<<p <<"^"<<e<<" is "<<Pow(p,e)<<endl;
    return 0;   
}