#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x) x *log10(x) - 1.2
#define e 0.000001
int main()
{
    int i = 0;
    float x0, x1, x2;
    float f0, f1, f2;
up:
    cout<<"Enter the value of x0: ";
    cin>>x0;
    cout<<"Enter the value of x1: ";
    cin>>x1;
    f0 = f(x0);
    f1 = f(x1);
    if ((f0 * f1) >= 0)
    {
        cout<<"Enter the valid x0 and x1 \n ";
        goto up;
    }
    printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
    do
    {
        f0 = f(x0);
        f1 = f(x1);
        x2 = ((x0 * f1) - (x1 * f0)) / (f1 - f0);
        f2 = f(x2);
        if (f2 * f0 < 0)
            x1 = x2;
        else
            x0 = x2;
        i++;
        printf("%d\t", i);
        printf(" %f \t", x0);
        printf(" %f \t", x1);
        printf(" %f \t", x2);
        printf(" %f \n", f2);
    } while (fabs(f2) > e);
    printf("Root value is : %f", x2);
}