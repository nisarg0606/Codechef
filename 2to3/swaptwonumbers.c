#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    // temp = a;
    // a = b;
    // b = temp;
    printf("The value of a and b after swapping is : %d %d", a, b);
}