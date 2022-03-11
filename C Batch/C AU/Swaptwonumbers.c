#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("The value of a and b is %d and %d after swapping. ", a, b);
    return 0;
}