#include <iostream>
#include <math.h>
using namespace std;

float SimpleInterest(float P, float T, float R)
{
    return (P * T * R) / 100;
}

inline float CompoundInterest(float P, float R, float N, float T)
{
    return (P * pow(1 + (R / N), N * T));
}

int main()
{
    float P, T, R, N;
    cout << "Enter the Principal Amount: ";
    cin >> P;
    cout << "Enter the Duration: ";
    cin >> T;
    cout << "Enter the Rate of Interest: ";
    cin >> R;
    cout << "The Simple Interest is " << SimpleInterest(P, T, R) << endl;
    cout << "The Simple Interest with Princple Amount " << P + SimpleInterest(P, T, R) << endl;
    cout << "Enter the Principal Amount(P): ";
    cin >> P;
    cout << "Enter the Rate of Interest(r): ";
    cin >> R;
    cout << "The number of times that interest is compounded per unit t(n): ";
    cin >> N;
    cout << "Enter the Duration(t): ";
    cin >> T;
    cout << "The compound interest is: " << CompoundInterest(P, R, N, T);
}