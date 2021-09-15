#include<iostream>
#include<math.h>
using namespace std;

inline float SimpleInterest(float P, float R, float T)
{
    //Formula to find Simple Interest is (P * R * T)/ 100
    //A = P + (P * R * T)/100
    return ((P * R * T)/ 100);
}

inline float CompoundInterest(float P, float R, float T, float N)
{
    return(P * pow(1 + (R / N), N * T));
}
int main()
{
    float P, R, T, N;
    cout<<"Enter the Principal Amount: ";
    cin>>P;
    cout<<"Enter the Rate of Interest: ";
    cin>>R;
    cout<<"Enter the Span of Time: ";
    cin>>T;
    cout<<"The Simple Interest will be : "<<SimpleInterest(P, R, T)<<endl;
    cout<<"The Total Amount that user needs to pay is : "<<P + SimpleInterest(P, R, T)<<endl;
    cout<<"Enter the Principal Amount(P): ";
    cin>>P;
    cout<<"Enter the Rate of Interest(R): ";
    cin>>R;
    cout<<"Enter the value of N: ";
    cin>>N;
    cout<<"Enter the Span of Time(T): ";
    cin>>T;
    cout<<"The compount Interest will be :"<<CompoundInterest(P, R, T, N) - P<<endl;
    cout<<"The Total amount will be :"<<CompoundInterest(P, R, T, N)<<endl;
    return 0;
}