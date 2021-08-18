#include<stdio.h>

void swap(int *x, int *y); //prototype

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("\nBefore swapping: ");
    printf("\nA is: %d", a);
    printf("\nB is: %d", b);
    swap(&a, &b);
    printf("\nAfter swapping: ");
    printf("\nA is: %d", a);
    printf("\nB is: %d", b);
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}