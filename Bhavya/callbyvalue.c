#include<stdio.h>

int swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping in func the value of a is %d and the value of b is %d\n", a, b);
}//call by value
int swapref(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}//call by reference
int main()
{
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);
    swap(a, b);
    printf("After swapping the value of a and b will be %d and %d", a, b);
    swapref(&a, &b);
    printf("\nAfter swapping the value of a and b will be %d and %d", a, b);
}